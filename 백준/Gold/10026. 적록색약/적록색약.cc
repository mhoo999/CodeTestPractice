#include <iostream>
#include <queue>
#include <string.h>

#define MAX 101
using namespace std;

int N;
int block = 0;
bool visit[MAX][MAX] = { 0 };
char map[MAX][MAX];
int dX[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

void BFS(int x, int y, char color)
{
	visit[x][y] = 1;
	queue<pair<int, int>> q;
	q.push(make_pair(x, y));
	
	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; ++i)
		{
			int nX = x + dX[i];
			int nY = y + dy[i];

			if (nX >= 0 && nX < N && nY >= 0 && nY < N)
			{
				if (visit[nX][nY] == 0 && map[nX][nY] == color)
				{
					visit[nX][nY] = 1;
					q.push(make_pair(nX, nY));
				}
			}
		}
	}
}

int main()
{
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		string s;
		cin >> s;

		for (int j = 0; j < N; ++j)
		{
			map[j][i] = s[j];
		}
	}

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			if (visit[j][i] == 0)
			{
				char color = map[j][i];
				BFS(j, i, color);
				block++;
			}
		}
	}

	cout << block << " ";

	memset(visit, 0, sizeof(visit));
	block = 0;

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			if (map[j][i] == 'G')
			{
				map[j][i] = 'R';
			}
		}
	}

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			if (visit[j][i] == 0)
			{
				char color = map[j][i];
				BFS(j, i, color);
				block++;
			}
		}
	}

	cout << block;

	return 0;
}