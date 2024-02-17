#include <iostream>

using namespace std;

int ans = 0;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N;
	cin >> N;

	while (N >= 0)
	{
		if (N % 5 == 0)
		{
			ans += (N / 5);
			cout << ans << endl;
			return 0;
		}
		N -= 3;
		ans++;
	}

	cout << -1 << endl;

	return 0;
}