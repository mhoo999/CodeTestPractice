#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int a[6] = { 500, 100, 50, 10, 5, 1 };

	int N;
	cin >> N;
	
	int change = 1000 - N;
	int coin = 0;

	for (int i = 0; i < 6; ++i)
	{
		if (change < a[i]) continue;
		if (change <= 0) break;

		coin += change / a[i];
		change = change % a[i];
	}

	cout << coin;

	return 0;
}