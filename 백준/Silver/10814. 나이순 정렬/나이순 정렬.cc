#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool cmp(const pair<int, string>& x, const pair<int, string>& y)
{
	return x.first < y.first;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;

	vector<pair<int, string>> list;

	for (int i = 0; i < N; ++i)
	{
		int age;
		string name;
		cin >> age >> name;

		list.push_back(make_pair(age, name));
	}

	stable_sort(list.begin(), list.end(), cmp);

	for (const auto& p : list)
	{
		cout << p.first << ' ' << p.second << '\n';
	}

	return 0;
}