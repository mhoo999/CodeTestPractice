#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(nullptr);

	long long s;
	cin >> s;

	int n = 0;

	while (s > 0)
	{
		n++;
		s = s - n;
	}

	if (s < 0)
	{
		n--;
	}

	cout << n;

	return 0;
}