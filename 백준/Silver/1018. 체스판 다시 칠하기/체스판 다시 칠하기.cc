#include <iostream>

using namespace std;

char board[50][50];
int n, m, minNum(64);

char wb[8][8] = {
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
};

char bw[8][8] = {
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
};

void checkWb(int x, int y)
{
	int cnt = 0;

	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			if (wb[i][j] == board[i + x][j + y])
			{
				cnt++;
			}
		}
	}

	if (cnt < minNum)
	{
		minNum = cnt;
	}
}

void checkBw(int x, int y)
{
	int cnt = 0;

	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			if (bw[i][j] == board[i + x][j + y])
			{
				cnt++;
			}
		}
	}

	if (cnt < minNum)
	{
		minNum = cnt;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> m;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			char c;
			cin >> c;

			board[i][j] = c;
		}
	}

	for (int i = 0; i < n - 7; ++i)
	{
		for (int j = 0; j < m - 7; ++j)
		{
			checkWb(i, j);
			checkBw(i, j);
		}
	}

	cout << minNum;

	return 0;
}