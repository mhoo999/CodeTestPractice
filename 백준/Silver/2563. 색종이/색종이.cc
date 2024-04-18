#include <iostream>

using namespace std;

int paper[101][101] = { 0 };

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int T;
	cin >> T;

	while (T--)
	{
		int x, y;
		cin >> x >> y;

		for (int i = x; i < x + 10; ++i)
		{
			for (int j = y; j < y + 10; ++j)
			{
				paper[i][j] = 1;
			}
		}
	}

	int cnt = 0;

	for (int i = 1; i < 101; ++i)
	{
		for (int j = 1; j < 101; ++j)
		{
			if (paper[i][j] == 1)
			{
				cnt++;
			}
		}
	}

	cout << cnt;

	return 0;
}