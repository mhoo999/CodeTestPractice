#include <iostream>
#include <unordered_set>

using namespace std;

unordered_set<int> set;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;

		set.insert(x);
	}

	cin >> m;

	for (int i = 0; i < m; ++i)
	{
		int x;
		cin >> x;

		cout << ((set.find(x) != set.end()) ? "1" : "0") << '\n';
	}

	return 0;
}