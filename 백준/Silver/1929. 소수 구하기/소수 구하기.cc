#include <iostream>

using namespace std;

bool isPrimeNumber(int x)
{
	if (x <= 1)
	{
		return false;
	}
	if (x <= 3)
	{
		return true;
	}
	if (x % 2 == 0 || x % 3 == 0)
	{
		return false;
	}

	int i = 5;
	while (i * i <= x)
	{
		if (x % i == 0 || x % (i + 2) == 0)
		{
			return false;
		}

		i += 6;
	}

	return true;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int m, n;
	cin >> m >> n;

	for (int i = m; i <= n; ++i)
	{
		if (isPrimeNumber(i))
		{
			cout << i << '\n';
		}
	}

	return 0;
}