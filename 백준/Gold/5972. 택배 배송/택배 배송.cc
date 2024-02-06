#include <iostream>
#include <vector>
#include <queue>

#define MAX 50001
#define INF 987654321
using namespace std;

int N, M;
vector<pair<int, int>> vec[MAX];
int cows[MAX];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> N >> M;

	while (M--)
	{
		int from, to, core;
		cin >> from >> to >> core;

		vec[from].push_back(make_pair(to, core));
		vec[to].push_back(make_pair(from, core));
	}

	for (int i = 1; i <= N; ++i)
	{
		cows[i] = INF;
	}

	pq.push(make_pair(0, 1));
	cows[1] = 0;

	while (!pq.empty())
	{
		int cost = pq.top().first;
		int current = pq.top().second;
		pq.pop();

		for (int i = 0; i < vec[current].size(); ++i)
		{
			int nCost = vec[current][i].second;
			int next = vec[current][i].first;

			if (cows[next] > cost + nCost)
			{
				cows[next] = cost + nCost;
				pq.push(make_pair(cows[next], next));
			}
		}
	}

	cout << cows[N];

	return 0;
}