#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;

	int cnt = N / 5 + N / 25 + N / 125;

	cout << cnt;

	return 0;
}