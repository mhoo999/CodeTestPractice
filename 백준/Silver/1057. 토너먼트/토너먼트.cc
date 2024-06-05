#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, jm, hs;
	cin >> n >> jm >> hs;

	int round = 0;

	while (jm != hs)
	{
		jm = (jm + 1) / 2;
		hs = (hs + 1) / 2;
		round++;
	}

	cout << round;

	return 0;
}