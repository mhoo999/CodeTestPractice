#include <iostream>
#include <queue>

#define MAX 1005
using namespace std;

int M, N;
int date = 0;
int map[MAX][MAX];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
queue <pair<int, int>> q;

void BFS()
{
	while (!q.empty())
	{
		int vertical = q.front().first;
		int horizontal = q.front().second;
		q.pop();

		for (int i = 0; i < 4; ++i)
		{
			int nV = dx[i] + vertical;
			int nH = dy[i] + horizontal;

			if (nV >= 0 && nV < N && nH >= 0 && nH < M)
			{
				if (map[nV][nH] == 0)
				{
					map[nV][nH] = map[vertical][horizontal] + 1;
					q.push(make_pair(nV, nH));
				}
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> M >> N;

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			int tomato;
			cin >> tomato;

			map[i][j] = tomato;

			if (map[i][j] == 1)
			{
				q.push(make_pair(i, j));
			}
		}
	}

	BFS();

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			if (map[i][j] == 0)
			{
				cout << "-1" << "\n";
				return 0;
			}

			if (date < map[i][j])
			{
				date = map[i][j];
			}
		}
	}

	cout << date - 1 << "\n";

	return 0;
}