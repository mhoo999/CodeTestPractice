#include <iostream>
#include <vector>
#include <string.h>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> vec[100];
int result = 0;
bool visit[1000];

void bfs(int temp)
{
	queue<int> q;
	q.push(temp);
	visit[temp] = true;

	while (!q.empty())
	{
		int x = q.front();
		q.pop();
		result++;

		for (int i = 0; i < vec[x].size(); ++i)
		{
			if (!visit[vec[x][i]])
			{
				q.push(vec[x][i]);
				visit[vec[x][i]] = true;
			}
		}
	}
}

int main()
{
	int n, m, a, b;
	cin >> n >> m;

	for (int i = 1; i <= m; ++i)
	{
		cin >> a >> b;
		vec[a].push_back(b);
		vec[b].push_back(a);
	}

	for (int i = 1; i <= n; ++i)
	{
		sort(vec[i].begin(), vec[i].end());
	}

	bfs(1);

	cout << result - 1;

	return 0;
}