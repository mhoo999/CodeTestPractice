#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<pair<string, int>> best;

bool Compair(pair<string, int> a, pair<string, int> b)
{
	if (a.second == b.second)
	{
		return a.first < b.first;
	}

	return a.second > b.second;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		string book;
		cin >> book;

		bool has = false;

		int j = 0;
		while (j < best.size())
		{
			if (best[j].first == book)
			{
				best[j].second++;
				has = true;
				break;
			}

			j++;
		}

		if (!has)
		{
			best.push_back(make_pair(book, 1));
		}
	}

	sort(best.begin(), best.end(), Compair);

	cout << best[0].first;

	return 0;
}