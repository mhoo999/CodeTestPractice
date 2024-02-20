#include <algorithm>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	vector<int> a;
	vector<int> b;

	int N;
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		int x;
		cin >> x;
		a.push_back(x);
	}

	for (int i = 0; i < N; ++i)
	{
		int x;
		cin >> x;
		b.push_back(x);
	}

	sort(a.begin(), a.end());
	sort(b.rbegin(), b.rend());

	int ans = 0;

	for (int i = 0; i < N; ++i)
	{
		ans += a[i] * b[i];
	}

	cout << ans;

	return 0;
}