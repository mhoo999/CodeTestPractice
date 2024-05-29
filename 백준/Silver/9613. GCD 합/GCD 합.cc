#include <iostream>
#include <vector>

using namespace std;

int GCD(const int x, const int y)
{
	int a = x > y ? x : y;
	int b = x > y ? y : x;

	int r = a % b;

	while (r != 0)
	{
		a = b;
		b = r;
		r = a % b;
	}

	return b;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		vector<int> arr;
		arr.reserve(n + 1);

		for (int i = 0; i < n; ++i)
		{
			int x;
			cin >> x;

			arr.push_back(x);
		}

		long long total = 0;

		for (int i = 0; i < arr.size() - 1; ++i)
		{
			for (int j = i + 1; j < arr.size(); ++j)
			{
				total += GCD(arr[i], arr[j]);
			}
		}

		cout << total << '\n';
	}

	return 0;
}