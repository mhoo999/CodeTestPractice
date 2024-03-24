#include <iostream>

using namespace std;

int GCD(int a, int b)
{
	while (b != 0)
	{
		int t = b;
		b = a % b;
		a = t;
	}

	return a;
}

int main()
{
	int x, y;
	cin >> x >> y;

	int greatestCommonDivisor = GCD(x, y);
	int minimumCommonMultiple = x * y / greatestCommonDivisor;

	cout << greatestCommonDivisor << '\n' << minimumCommonMultiple;

	return 0;
}