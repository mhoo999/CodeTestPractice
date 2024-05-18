#include <iostream>

using namespace std;

long long hypotenuses[101];

void triangle(int n)
{
	if (n > 8)
	{
		for (int i = 9; i <= n; ++i)
		{
			hypotenuses[i] = hypotenuses[i - 1] + hypotenuses[i - 5];
		}
	}

	cout << hypotenuses[n] << '\n';
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t, n;
	cin >> t;

	hypotenuses[1] = 1;
	hypotenuses[2] = 1;
	hypotenuses[3] = 1;
	hypotenuses[4] = 2;
	hypotenuses[5] = 2;
	hypotenuses[6] = 3;
	hypotenuses[7] = 4;
	hypotenuses[8] = 5;

	while (t--)
	{
		cin >> n;

		triangle(n);
	}

	return 0;
}