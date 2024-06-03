#include <iostream>

using namespace std;

int LCM(int x, int y)
{
	int a = x > y ? x : y;
	int b = x > y ? y : x;

	int r = a % b;

	while (r != 0)
	{
		a = b;
		b = r;
		r = a % b;
	}

	return b;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, x;
	cin >> n >> x;

	for (int i = 1; i < n; ++i)
	{
		int y;
		cin >> y;

		int lcm = LCM(x, y);

		cout << x / lcm << "/" << y / lcm << '\n';
	}

	return 0;
}