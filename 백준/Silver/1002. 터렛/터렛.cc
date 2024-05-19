#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	while (n--)
	{
		int x, y, r, x2, y2, r2;
		cin >> x >> y >> r >> x2 >> y2 >> r2;

		double dist = sqrt(pow(x2 - x, 2) + pow(y2 - y, 2));

		if (dist == 0)
		{
			if (r == r2)
			{
				cout << -1 << '\n';
			}
			else
			{
				cout << 0 << '\n';
			}
		}
		else
		{
			if (dist > r + r2)
			{
				cout << 0 << '\n';
			}
			else if (dist < abs(r - r2))
			{
				cout << 0 << '\n'; 
			}
			else if (dist == r + r2)
			{
				cout << 1 << '\n';
			}
			else if (dist == abs(r - r2))
			{
				cout << 1 << '\n';
			}
			else
			{
				cout << 2 << '\n';
			}
		}

	}

	return 0;
}