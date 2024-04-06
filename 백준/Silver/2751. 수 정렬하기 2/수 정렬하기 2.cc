#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> vec;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		int num;
		cin >> num;

		vec.push_back(num);
	}

	sort(vec.begin(), vec.end());

	for (int i = 0; i < N; ++i)
	{
		cout << vec[i] << '\n';
	}

	return 0;
}