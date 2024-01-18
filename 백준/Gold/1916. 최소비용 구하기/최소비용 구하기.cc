#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

#define MAX 100001
#define INF 987654321
using namespace std;

int N, M, start, destination;
int answer = 0;
vector<pair<int, int>> vec[MAX];
priority_queue<pair<int, int>> pq;
int dist[MAX];

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N >> M;

	while (M--)
	{
		int from, to, core;
		cin >> from >> to >> core;

		vec[from].push_back(make_pair(to, core));
	}

	cin >> start >> destination;

	for (int i = 1; i <= N; ++i)
	{
		dist[i] = INF;
	}

	pq.push(make_pair(0, start));
	dist[start] = 0;

	while (!pq.empty())
	{
		int cost = -pq.top().first;
		int current = pq.top().second;
		pq.pop();

		if (dist[current] < cost)
		{
			continue;
		}

		for (int i = 0; i < vec[current].size(); ++i)
		{
			int nCost = vec[current][i].second;
			int next = vec[current][i].first;

			if (dist[next] > cost + nCost)
			{
				dist[next] = cost + nCost;
				pq.push(make_pair(-dist[next], next));
			}
		}
	}

	cout << dist[destination];

	return 0;
}