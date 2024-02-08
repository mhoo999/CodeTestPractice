#include <iostream>

using namespace std;

int map[129][129];
int white = 0, blue = 0;

void div_conq(int x, int y, int N)
{
	int temp = 0;
	for (int i = x; i < x + N; ++i)
	{
		for (int j = y; j < y + N; ++j)
		{
			if (map[i][j])
			{
				temp++;
			}
		}
	}

	if (!temp)
	{
		white++;
	}
	else if (temp == N * N)
	{
		blue++;
	}
	else
	{
		div_conq(x, y, N / 2);
		div_conq(x, y + N / 2, N / 2);
		div_conq(x + N / 2, y, N / 2);
		div_conq(x + N / 2, y + N / 2, N / 2);
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N;
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			cin >> map[i][j];
		}
	}

	div_conq(0, 0, N);

	cout << white << "\n";
	cout << blue << "\n";

	return 0;
}