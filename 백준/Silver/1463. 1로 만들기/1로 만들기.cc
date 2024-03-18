#include <iostream>
#include <vector>

#define MAX 1000001
using namespace std;

vector<int> dp(MAX);

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N;
	cin >> N;

	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 1;

	for (int i = 4; i < MAX; ++i)
	{
		int count = 0;

		dp[i] = dp[i - 1] + 1;

		if (i % 3 == 0)
		{
			count = 1 + dp[i / 3];
			if (count < dp[i])
			{
				dp[i] = count;
			}
		}
		if (i % 2 == 0)
		{
			count = 1 + dp[i / 2];
			if (count < dp[i])
			{
				dp[i] = count;
			}
		}
	}

	cout << dp[N];

	return 0;
}