#include <iostream>

using namespace std;

int value[10];

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N, K;
	cin >> N >> K;

	for (int i = 0; i < N; ++i)
	{
		cin >> value[i];
	}

	int ans = 0;

	for (int i = N - 1; i >= 0; --i)
	{
		while (value[i] <= K)
		{
			K -= value[i];
			ans++;
		}

		if (K <= 0)
		{
			break;
		}
	}

	cout << ans;

	return 0;
}