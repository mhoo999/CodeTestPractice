#include <iostream>
#include <vector>
#include <queue>

#define MAX 2501
using namespace std;

int T, M, N, K;
int visit[51][51] = { 0 };
int map[51][51] = { 0 };
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, -1, 0, 1 };
vector<int> answer;

void BFS(int i, int j)
{
	visit[i][j] = 1;
	queue<pair<int, int>> q;
	q.push(make_pair(i, j));

	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; ++i)
		{
			int nx = dx[i] + x;
			int ny = dy[i] + y;

			if (nx >= 0 && nx < M && ny >= 0 && ny < N)
			{
				if (map[nx][ny] == 1 && visit[nx][ny] == 0)
				{
					visit[nx][ny] = 1;
					q.push(make_pair(nx, ny));
				}
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> T;


	while (T--)
	{
		cin	>> M >> N >> K;

		int worm = 0;

		for (int i = 0; i < K; ++i)
		{
			int a, b;
			cin >> a >> b;
			map[a][b] = 1;
		}

		for (int i = 0; i < M; ++i)
		{
			for (int j = 0; j < N; ++j)
			{
				if (map[i][j] == 1 && visit[i][j] == 0)
				{
					BFS(i, j);
					worm++;
				}
			}
		}

		answer.push_back(worm);
		
		for (int i = 0; i < M; ++i)
		{
			for (int j = 0; j < N; ++j)
			{
				visit[i][j] = 0;
				map[i][j] = 0;
			}
		}
	}

	for (int i = 0; i < answer.size(); ++i)
	{
		cout << answer[i] << "\n";
	}

	return 0;
}