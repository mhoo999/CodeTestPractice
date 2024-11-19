#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int N, M, V;
vector<int> Graph[1001];
bool visited[1001];

void DFS(int node)
{
	cout << node << ' ';
	visited[node] = true;

	for (int next : Graph[node])
	{
		if (!visited[next])
		{
			DFS(next);
		}
	}
}

void BFS(int start)
{
	queue<int> q;
	q.push(start);
	visited[start] = true;

	while (!q.empty())
	{
		int node = q.front();
		q.pop();

		cout << node << ' ';

		for (int next : Graph[node])
		{
			if (!visited[next])
			{
				q.push(next);
				visited[next] = true;
			}
		}
	}
}

int main()
{
	cin >> N >> M >> V;

	for (int i = 0; i < M; ++i)
	{
		int x, y;
		cin >> x >> y;

		Graph[x].push_back(y);
		Graph[y].push_back(x);
	}

	for (int i = 1; i <= N; i++)
	{
		sort(Graph[i].begin(), Graph[i].end());
	}

	fill(visited, visited + 1001, false);
	DFS(V);

	cout << '\n';

	fill(visited, visited + 1001, false);
	BFS(V);

	return 0;
}