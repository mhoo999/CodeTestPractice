#include <iostream>
#include <vector>
#include <queue>

#define endl "\n"
#define MAX 20010
#define INF 987654321
using namespace std;

int V, E, start;
int dist[MAX];
vector<pair<int, int>> vec[MAX];

int main()
{
	cin >> V >> E >> start;

	for (int i = 0; i < E; ++i)
	{
		int a, b, c;
		cin >> a >> b >> c;

		vec[a].push_back(make_pair(b, c));
	}

	for (int i = 1; i <= V; ++i)
	{
		dist[i] = INF;
	}

	priority_queue<pair<int, int>> pq;
	pq.push(make_pair(0, start));
	dist[start] = 0;

	while (!pq.empty())
	{
		int cost = -pq.top().first;
		int cur = pq.top().second;
		pq.pop();

		for (int i = 0; i < vec[cur].size(); ++i)
		{
			int next = vec[cur][i].first;
			int nCost = vec[cur][i].second;

			if (dist[next] > cost + nCost)
			{
				dist[next] = cost + nCost;
				pq.push(make_pair(-dist[next], next));
			}
		}
	}

	for (int i = 1; i <= V; ++i)
	{
		if (dist[i] == INF)
		{
			cout << "INF" << endl;
		}
		else
		{
			cout << dist[i] << endl;
		}
	}

	return 0;
}