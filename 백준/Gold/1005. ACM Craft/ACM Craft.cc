#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int N, K;
		cin >> N >> K;

		int time[1002];

		for (int i = 1; i <= N; ++i)
		{
			cin >> time[i];
		}

		vector<int> build[1002];
		int inDegree[1002] = { 0 };
		queue<int> q;
		int result[1002];

		while (K--)
		{
			int a, b;
			cin >> a >> b;
			build[a].push_back(b);
			inDegree[b]++;
		}

		int W;
		cin >> W;

		for (int i = 1; i <= N; ++i)
		{
			if (inDegree[i] == 0)
			{
				q.push(i);
			}
			result[i] = time[i];
		}

		while (!q.empty())
		{
			int x = q.front();
			q.pop();

			for (int i = 0; i < build[x].size(); ++i)
			{
				int y = build[x][i];
				result[y] = max(result[y], result[x] + time[y]);
				if (--inDegree[y] == 0)
				{
					q.push(y);
				}
			}
		}

		cout << result[W] << endl;
	}

	return 0;
}