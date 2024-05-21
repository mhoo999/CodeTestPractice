#include <iostream>

using namespace std;

int arr[10000];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	int cnt = 0;
	cin >> n >> m;

	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;

		arr[i] = x;
	}

	for (int i = 0; i < n; ++i)
	{
		int total = 0;
		int j = i;

		while (total < m && j < n)
		{
			total += arr[j++];

			if (total == m)
			{
				cnt++;
			}
		}
	}

	cout << cnt;

	return 0;
}