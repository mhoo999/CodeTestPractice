#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int e, s, m;
	cin >> e >> s >> m;

	int year = 1;

	while ((year % 15 != e % 15) || (year % 28 != s % 28) || (year % 19 != m % 19))
	{
		year++;
	}

	cout << year;

	return 0;
}