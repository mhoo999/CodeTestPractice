#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	long long sum = 0;
	int digit = 1;
	int startNum = 1;

	while (true)
	{
		int endNum = startNum * 10 - 1;

		if (n < endNum)
		{
			sum += (n - startNum + 1) * digit;
			break;
		}
		else
		{
			sum += (endNum - startNum + 1) * digit;
		}

		startNum *= 10;
		digit++;
	}

	cout << sum;

	return 0;
}