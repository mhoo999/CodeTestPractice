#include <iostream>
#include <vector>

using namespace std;

vector<int> arr;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;

		arr.push_back(x);
	}

	int ans = 0;

	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			if (arr[i] + arr[j] == m)
			{
				ans++;
			}
		}
	}

	cout << ans;

	return 0;
}