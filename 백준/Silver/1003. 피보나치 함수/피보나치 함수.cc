#include <iostream>

using namespace std;

int fibonacci(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else if (n == 1 || n < 0)
	{
		return 1;
	}
	else
	{
		int prev1 = 0;
		int prev2 = 1;
		int fn = 0;

		for (int i = 1; i < n; ++i)
		{
			fn = prev1 + prev2;

			prev1 = prev2;
			prev2 = fn;
		}

		return fn;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t, x;
	cin >> t;

	while (t--)
	{
		cin >> x;

		cout << fibonacci(x - 1) << " " << fibonacci(x) << '\n';
	}

	return 0;
}