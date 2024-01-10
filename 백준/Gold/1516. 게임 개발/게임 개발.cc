#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N, a, b;
int buildTime[501] = { 0 };
vector<int> vec[501];
int inDegree[501] = { 0 };
queue<int> q;
int result[501] = { 0 };

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N;

	for (int i = 1; i <= N; ++i)
	{
		cin >> a;
		buildTime[i] = a;

		while (true)
		{
			cin >> b;

			if (b == -1)
			{
				break;
			}

			vec[b].push_back(i);
			inDegree[i]++;
		}
	}

	for (int j = 1; j <= N; ++j)
	{
		if (inDegree[j] == 0)
		{
			q.push(j);
			result[j] = buildTime[j];
		}
	}

	while (!q.empty())
	{
		int x = q.front();
		q.pop();

		for (int j = 0; j < vec[x].size(); ++j)
		{
			int y = vec[x][j];
			//buildTime[y] += buildTime[x];
			result[y] = max(result[y], result[x] + buildTime[y]);

			if (--inDegree[y] == 0)
			{
				q.push(y);
			}
		}
	}

	for (int i = 1; i <= N; ++i)
	{
		cout << result[i] << endl;
	}

	return 0;
}