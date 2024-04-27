#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int cnt = 0;

	if (n < 100)
	{
		cnt = n;
	}
	else
	{
		cnt = 99;

		for (int i = 100; i <= n; ++i)
		{
			int hun = i / 100;
			int ten = (i / 10) % 10;
			int one = i % 10;

			if ((hun - ten) == (ten - one))
			{
				cnt++;
			}
		}
	}

	cout << cnt;

	return 0;
}