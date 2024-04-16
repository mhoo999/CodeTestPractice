#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>> sight;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int T;
	cin >> T;

	for (int i = 0; i < T; ++i)
	{
		int N, M;
		cin >> N >> M;

		sight.push_back(make_pair(N, M));
	}

	for (int i = 0; i < T; ++i)
	{
		long long result = 1;
		int r = 1;

		for (int j = sight[i].second; j > (sight[i].second - sight[i].first); --j)
		{
			result = result * j;
			result = result / r;
			r++;
		}

		cout << result << '\n';
	}

	return 0;
}