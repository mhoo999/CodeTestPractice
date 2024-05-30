#include <iostream>

using namespace std;

bool arr[101];

void switching(int x, int y, int n)
{
	if (x < 1 || y > n) return;

	if (arr[x] == arr[y])
	{
		arr[x] = !arr[x];
		arr[y] = !arr[y];
		
		switching(x - 1, y + 1, n);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		int x;
		cin >> x;

		arr[i] = x;
	}

	int student;
	cin >> student;

	for (int i = 0; i < student; ++i)
	{
		int x, y;
		cin >> x >> y;

		if (x == 1)
		{
			for (int j = y; j <= n; j += y)
			{
				arr[j] = !arr[j];
			}
		}
		else
		{
			arr[y] = !arr[y];
			switching(y - 1, y + 1, n);
		}
	}

	for (int i = 1; i <= n; ++i)
	{
		cout << arr[i] << " ";
		if (i % 20 == 0) cout << "\n";
	}

	return 0;
}
