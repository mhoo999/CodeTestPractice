#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int a[4] = { 25, 10, 5, 1 };

	int N;
	cin >> N;

	while (N--)
	{
		int change;
		cin >> change;

		for (int i = 0; i < 4; ++i)
		{
			int ans = 0;

			if (change < a[i])
			{
				cout << '0' << " ";
				continue;
			}
			if (change <= 0)
			{
				break;
			}

			ans = change / a[i];
			change = change - ans * a[i];

			cout << ans << " ";
		}

		cout << "\n";
	}

	return 0;
}