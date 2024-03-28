#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int month[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	string array[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };

	int x, y, ans;

	cin >> x >> y;

	for (int i = 0; i < x; ++i)
	{
		y += month[i];
	}

	cout << array[y % 7] << endl;

	return 0;
}