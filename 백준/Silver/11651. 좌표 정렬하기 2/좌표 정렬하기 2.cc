#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>> coordinate;

bool cmp(pair<int, int> x, pair<int, int> y)
{
	if (x.second != y.second)
	{
		return x.second < y.second;
	}
	else
	{
		return x.first < y.first;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		int x, y;
		cin >> x >> y;

		coordinate.push_back(make_pair(x, y));
	}

	sort(coordinate.begin(), coordinate.end(), cmp);

	for (int i = 0; i < N; ++i)
	{
		cout << coordinate[i].first << ' ' << coordinate[i].second << '\n';
	}

	return 0;
}