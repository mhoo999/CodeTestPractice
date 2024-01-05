#include <iostream>
#include <queue>

using namespace std;

int N, M;
int visit[101][101];
int check[101][101];
char map[101][101];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

void BFS(int x, int y)
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
			int next_x = dx[i] + x;
			int next_y = dy[i] + y;

			if (next_x >= 0 && next_x < N && next_y >= 0 && next_y < M)
			{
				if (visit[next_x][next_y] == 0 && map[next_x][next_y] == '1')
				{
					check[next_x][next_y] = check[x][y] + 1;
					visit[next_x][next_y] = 1;
					q.push(make_pair(next_x, next_y));
				}
			}
		}
	}
}

int main()
{
	cin >> N >> M;

	for (int i = 0; i < N; ++i)
	{
		cin >> map[i];
	}

	BFS(0, 0);

	cout << (check[N - 1][M - 1] + 1);

	return 0;
}