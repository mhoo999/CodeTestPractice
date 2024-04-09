#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>> vec;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;

	while (N--)
	{
		int x, y;
		cin >> x >> y;

		vec.push_back(make_pair(x, y));
	}

	sort(vec.begin(), vec.end());

	for (int i = 0; i < vec.size(); ++i)
	{
		cout << vec[i].first << ' ' << vec[i].second << '\n';
	}

	return 0;
}