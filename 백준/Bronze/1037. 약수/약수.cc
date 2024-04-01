#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	int max = 0;
	int min = 1000001;

	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		int a;
		cin >> a;

		if (a > max)
		{
			max = a;
		}

		if (a < min)
		{
			min = a;
		}
	}

	cout << (max * min);

	return 0;
}