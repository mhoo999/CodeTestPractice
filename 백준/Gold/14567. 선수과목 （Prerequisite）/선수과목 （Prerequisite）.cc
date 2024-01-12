#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int N, M, a, b;
vector<int> vec[1001];
int inDegree[1001];
queue<int> q;
int result[1001];

int main()
{
	cin >> N >> M;

	for (int i = 0; i < M; ++i)
	{
		cin >> a >> b;
		vec[a].push_back(b);
		inDegree[b]++;
	}

	for (int i = 1; i <= N; ++i)
	{
		if (inDegree[i] == 0)
		{
			q.push(i);
		}
		result[i]++;
	}

	while (!q.empty())
	{
		int x = q.front();
		q.pop();

		for (int i = 0; i < vec[x].size(); ++i)
		{
			int y = vec[x][i];
			result[y] = result[x] + 1;

			if (--inDegree[y] == 0)
			{
				q.push(y);
			}
		}
	}

	for (int i = 1; i <= N; ++i)
	{
		cout << result[i] << " ";
	}

	return 0;
}