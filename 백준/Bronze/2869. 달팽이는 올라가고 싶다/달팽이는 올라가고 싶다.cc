#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int A, B, V;
	cin >> A >> B >> V;

	int day = 0;

	day = (V - B - 1) / (A - B) + 1;

	cout << day;

	return 0;
}