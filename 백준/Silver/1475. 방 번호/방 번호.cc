#include <iostream>
#include <string>

using namespace std;

int number_set[10] = { 0 };

int main()
{
	ios::sync_with_stdio(false); cin.tie(nullptr);

	string n;
	cin >> n;

	for (int i = 0; i < n.size(); ++i)
	{
		int x = n[i] - '0';
		number_set[x]++;
	}

	int six_nine = (number_set[6] + number_set[9] + 1) / 2;
	number_set[6] = number_set[9] = six_nine;

	int cnt = 0;

	for (int i = 0; i < 10; ++i)
	{
		if (number_set[i] > cnt)
		{
			cnt = number_set[i];
		}
	}

	cout << cnt;

	return 0;
}