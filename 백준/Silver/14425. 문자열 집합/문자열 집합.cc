#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

unordered_set<string> strs;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	while (n--)
	{
		string str;
		cin >> str;

		strs.insert(str);
	}

	int cnt = 0;

	while (m--)
	{
		string str;
		cin >> str;

		if (strs.find(str) != strs.end())
		{
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}