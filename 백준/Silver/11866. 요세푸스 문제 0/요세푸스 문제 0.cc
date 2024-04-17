#include <iostream>
#include <vector>

using namespace std;

vector<int> peoples;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N, K;
	cin >> N >> K;

	for (int i = 1; i <= N; ++i)
	{
		peoples.push_back(i);
	}

	int num = 0;

	cout << '<';
	while (!peoples.empty())
	{
		num += K - 1;
		num %= peoples.size();

		cout << peoples[num];
		peoples.erase(peoples.begin() + num);

		if (!peoples.empty())
		{
			cout << ", ";
		}
	}
	cout << '>';

	return 0;
}