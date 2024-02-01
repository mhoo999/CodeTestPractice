#include <iostream>
#include <vector>
#include <queue>

#define MAX 10003
using namespace std;

int N;
int workTime[MAX];
int inDegree[MAX];
vector<int> vec[MAX];
queue<int> q;
int result[MAX];

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N;

	for (int i = 1; i <= N; ++i)
	{
		int min, edge;
		cin >> min >> edge;

		workTime[i] = result[i] = min;

		for (int j = 0; j < edge; ++j)
		{
			int dest;
			cin >> dest;

			vec[dest].push_back(i);
			inDegree[i]++;
		}
	}

	for (int i = 1; i <= N; ++i)
	{
		if (inDegree[i] == 0)
		{
			q.push(i);
		}
	}

	while (!q.empty())
	{
		int x = q.front();
		int oldTime = workTime[x];
		q.pop();

		for (int i = 0; i < vec[x].size(); ++i)
		{
			int y = vec[x][i];
			int currentTime = workTime[y];

			result[y] = max(result[y], result[x] + workTime[y]);

			if (--inDegree[y] == 0)
			{
				q.push(y);
			}
		}
	}

	int ans = -1;
	for (int i = 1; i <= N; ++i)
	{
		ans = max(ans, result[i]);
	}

	cout << ans;

	return 0;
}