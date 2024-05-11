#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, x, max(0);
	vector<int> vec;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> x;

		vec.push_back(x);
	}

	sort(vec.rbegin(), vec.rend());

	int cnt = 1;

	for (int i = 0; i < vec.size(); ++i)
	{
		int x = vec[i] * (i + 1);

		if (max < x)
		{
			max = x;
		}

		cnt++;
	}

	cout << max;

	return 0;
}