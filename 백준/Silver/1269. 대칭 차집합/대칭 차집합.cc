#include <iostream>
#include <unordered_set>

using namespace std;

unordered_set<int> setA;
unordered_set<int> setB;

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

		setA.insert(x);
	}

	for (int i = 0; i < m; ++i)
	{
		int x;
		cin >> x;

		setB.insert(x);
	}

	int cnt = 0;

	for (const int& iter : setA)
	{
		if (setB.find(iter) == setB.end())
		{
			cnt++;
		}
	}

	for (const int& iter : setB)
	{
		if (setA.find(iter) == setA.end())
		{
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}