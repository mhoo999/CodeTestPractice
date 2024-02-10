#include <iostream>

#define MAX 65
using namespace std;

string map[MAX][MAX];

void dvid_conq(int x, int y, int N)
{
	int Temp = 0;
	for (int i = x; i < x + N; ++i)
	{
		for (int j = y; j < y + N; ++j)
		{
			if (map[i][j] == "1")
			{
				Temp++;
			}
		}
	}

	if (!Temp)
	{
		cout << "0";
	}
	else if (Temp == N * N)
	{
		cout << "1";
	}
	else
	{
		cout << "(";
		dvid_conq(x, y, N / 2);
		dvid_conq(x, y + N / 2, N / 2);
		dvid_conq(x + N / 2, y, N / 2);
		dvid_conq(x + N / 2, y + N / 2, N / 2);
		cout << ")";
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
			char c;
			cin >> c;
			map[i][j] = c;
		}
	}

	dvid_conq(0, 0, N);

	return 0;
}