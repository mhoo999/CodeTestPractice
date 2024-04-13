#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;

	vector<pair<pair<int, int>, int>> students;

	for (int i = 0; i < N; ++i)
	{
		int weight, height;
		cin >> weight >> height;

		students.push_back(make_pair(make_pair(weight, height), 0));
	}

	for (int i = 0; i < N; ++i)
	{
		int k = 1;

		for (int j = 0; j < N; ++j)
		{
			if (students[i].first.first < students[j].first.first && students[i].first.second < students[j].first.second)
			{
				k++;
			}
		}

		students[i].second = k;
	}

	for (int i = 0; i < N; ++i)
	{
		cout << students[i].second << ' ';
	}

	return 0;
}