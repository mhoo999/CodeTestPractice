#include <iostream>

#define MAX 2188
using namespace std;

int map[MAX][MAX];
int a = 0, b = 0, c = 0;

void div_conq(int x, int y, int N)
{
	int temp1 = 0, temp2 = 0, temp3 = 0;
	for (int i = x; i < x + N; ++i)
	{
		for (int j = y; j < y + N; ++j)
		{
			if (map[i][j] == 0)
			{
				temp1++;
			}
			else if (map[i][j] == 1)
			{
				temp2++;
			}
			else
			{
				temp3++;
			}
		}
	}

	if (temp3 == N*N)
	{
		a++;
	}
	else if (temp1 == N*N)
	{
		b++;
	}
	else if (temp2 == N*N)
	{
		c++;
	}
	else
	{
		div_conq(x,				y,				N / 3);
		div_conq(x + N / 3,		y,				N / 3);
		div_conq(x + 2 * N / 3, y,				N / 3);

		div_conq(x,				y + N / 3,		N / 3);
		div_conq(x + N / 3	,	y + N / 3,		N / 3);
		div_conq(x + 2 * N / 3, y + N / 3,		N / 3);

		div_conq(x,				y + 2 * N / 3,	N / 3);
		div_conq(x + N / 3,		y + 2 * N / 3,	N / 3);
		div_conq(x + 2 * N / 3,	y + 2 * N / 3,	N / 3);

	}
}

int main()
{
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

	cout << a << "\n";
	cout << b << "\n";
	cout << c << "\n";

	return 0;
}