#include <iostream>

using namespace std;

int factorial(const int x)
{
	int input = x;
	int value = 1;

	while (input > 0)
	{
		value *= input--;
	}

	return value;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N, K;
	cin >> N >> K;

	int ans = factorial(N) / (factorial(K) * factorial(N - K));

	cout << ans;

	return 0;
}