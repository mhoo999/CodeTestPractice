#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int N;
int visit[26][26] = {};
int complex = 0;
int house[626] = {};
char map[26][26] = {};
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, -1, 0, 1 };

void BFS(int x, int y, int& house)
{
	house += 1;
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

			if (next_x >= 0 && next_x < N && next_y >= 0 && next_y < N)
			{
				if (visit[next_x][next_y] == 0 && map[next_x][next_y] == '1')
				{
					house += 1;
					visit[next_x][next_y] = 1;
					q.push(make_pair(next_x, next_y));
				}
			}
		}
	}
}

int main()
{
	// 1. 0부터 N*N만큼 원소를 방문하면서 visit이 0이고, map의 값이 1인 원소를 찾는다.
	// 2. 1을 찾았다면 해당 부분(n)에서 BFS를 돌리면서 확인된 집의 개수를 House[n]의 값으로 넣는다. 
	// 3. N*N까지 1을 반복한다.

	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			cin >> map[i][j];
		}
	}

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			if (map[i][j] == '1' && visit[i][j] == 0)
			{
				BFS(i, j, house[complex]);
				complex ++;
				// cout << house[complex] << '\n';
			}
		}
	}

	cout << complex << '\n';

	sort(house, house + complex);

	for (int i = 0; i < complex; ++i)
	{
		cout << house[i] << '\n';
	}

	return 0;
}