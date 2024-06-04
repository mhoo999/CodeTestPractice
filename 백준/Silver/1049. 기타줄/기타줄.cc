#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> package;
vector<int> unit;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < m; ++i)
	{
		int x, y;
		cin >> x >> y;

		package.push_back(x);
		unit.push_back(y);
	}

	sort(package.begin(), package.end());
	sort(unit.begin(), unit.end());

	int price = 0;

	int package_cost = (n / 6) * package[0] + min((n % 6) * unit[0], package[0]);
	int unit_cost = n * unit[0];

	price = min(package_cost, unit_cost);

	cout << price;

	return 0;
}