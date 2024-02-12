#include <algorithm>
#include <iostream>
#include <vector>

#define MAX 1024
using namespace std;

int map[MAX][MAX];

int div_conq(int x, int y, int half)
{
	vector<int> v;
	if (half == 1)
	{
		v.push_back(map[x][y]);
		v.push_back(map[x + 1][y]);
		v.push_back(map[x][y + 1]);
		v.push_back(map[x + 1][y + 1]);
		sort(v.begin(), v.end());
		return v[2];
	}
	else
	{
		v.push_back(div_conq(x, y, half / 2));
		v.push_back(div_conq(x, y + half, half / 2));
		v.push_back(div_conq(x + half, y, half / 2));
		v.push_back(div_conq(x + half, y + half, half / 2));
		sort(v.begin(), v.end());
		return v[2];
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

	cout << div_conq(0, 0, N / 2);

	return 0;
}