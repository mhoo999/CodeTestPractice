#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<pair<string, pair<int, pair<int, int>>>> vec;

bool compair(pair<string, pair<int, pair<int, int>>> p1, pair<string, pair<int, pair<int, int>>> p2)
{
	if (p1.second.first == p2.second.first)
	{
		if (p1.second.second.first == p2.second.second.first)
		{
			if (p1.second.second.second == p2.second.second.second)
			{
				return p1.first < p2.first;
			}

			return p1.second.second.second > p2.second.second.second;
		}

		return p1.second.second.first < p2.second.second.first;
	}

	return p1.second.first > p2.second.first;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;


	for (int i = 0; i < n; ++i)
	{
		string name;
		int x, y, z;

		cin >> name >> x >> y >> z;
		vec.push_back(make_pair(name, make_pair(x, make_pair(y, z))));
	}

	sort(vec.begin(), vec.end(), compair);

	for (int i = 0; i < n; ++i)
	{
		cout << vec[i].first << '\n';
	}

	return 0;
}