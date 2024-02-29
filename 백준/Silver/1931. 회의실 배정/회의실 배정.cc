#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int value[10];

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	vector<pair<int, int>> vec;

	int N;
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		int a, b;
		cin >> a >> b;

		vec.push_back(make_pair(b, a));
	}

	sort(vec.begin(), vec.end());

	int endTime = vec[0].first;
	int count = 1;

	for (int i = 1; i < N; ++i)
	{
		if (vec[i].second >= endTime)
		{
			count++;
			endTime = vec[i].first;
		}
	}

	cout << count;

	return 0;
}