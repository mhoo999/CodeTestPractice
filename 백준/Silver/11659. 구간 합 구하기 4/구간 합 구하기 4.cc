#include <iostream>

using namespace std;

int arr[100001];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	arr[0] = 0;

	for (int i = 1; i <= n; ++i)
	{
		int x;
		cin >> x;
		arr[i] = arr[i - 1] + x;
	}

	while (m--)
	{
		int x, y;
		cin >> x >> y;

		long long total = arr[y] - arr[x - 1];

		cout << total << '\n';
	}

	return 0;
}