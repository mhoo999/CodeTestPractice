#include <iostream>
#include <cstdlib>

using namespace std;

int cards[20000000] = { 0 };

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;

		if (x < 0)
		{
			cards[abs(x) + 10000000] += 1;
		}
		else
		{
			cards[x] += 1;
		}
	}

	cin >> m;

	for (int i = 0; i < m; ++i)
	{
		int x;
		cin >> x;

		if (x < 0)
		{
			cout << cards[abs(x) + 10000000] << " ";
		}
		else
		{
			cout << cards[x] << " ";
		}
	}

	return 0;
}