#include <algorithm>
#include <iostream>
#include <unordered_set>
#include <string>
#include <vector>

using namespace std;

unordered_set<string> nameList;
vector<string> dbj;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m, cnt(0);
	cin >> n >> m;

	while (n--)
	{
		string name;
		cin >> name;

		nameList.insert(name);
	}

	while (m--)
	{
		string name;
		cin >> name;

		if (nameList.find(name) != nameList.end())
		{
			dbj.push_back(name);
			cnt++;
		}
	}

	sort(dbj.begin(), dbj.end());

	cout << cnt << '\n';

	for (int i = 0; i < dbj.size(); ++i)
	{
		cout << dbj[i] << '\n';
	}

	return 0;
}