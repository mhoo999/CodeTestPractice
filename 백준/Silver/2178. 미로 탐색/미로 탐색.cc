#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int N, M;
int Maze[100][100];

int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };

int BFS()
{
	queue<pair<int, int>> q;
	q.push({ 0, 0 });
	Maze[0][0] = 2;

	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx >= 0 && nx < N && ny >= 0 && ny < M && Maze[nx][ny] == 1)
			{
				Maze[nx][ny] = Maze[x][y] + 1;
				q.push({ nx, ny });
			}
		}
	}

	return Maze[N - 1][M - 1] - 1;
}

int main()
{
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		string x;
		cin >> x;

		for (int j = 0; j < M; j++)
		{
			Maze[i][j] = x[j] - '0';
		}
	}

	cout << BFS() << endl;

	return 0;
}