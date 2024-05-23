#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string n;
	cin >> n;

	if (n.find('0') == string::npos)
	{
		cout << "-1";
		return 0;
	}

	long long sum = 0;
	for (char digit : n)
	{
		sum += digit - '0';
	}

	if (sum % 3 != 0)
	{
		cout << "-1";
		return 0;
	}

	sort(n.rbegin(), n.rend());

	cout << n;

	return 0;
}