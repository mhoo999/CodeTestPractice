#include <iostream>
#include <string>
#include <algorithm>

#define MAX 1001
using namespace std;

int dp[MAX][MAX];

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	string a, b;
	cin >> a >> b;

	for (int i = 1; i <= a.length(); ++i)
	{
		for (int j = 1; j <= b.length(); ++j)
		{
			if (a[i - 1] == b[j - 1])
			{
				dp[i][j] = dp[i - 1][j - 1] + 1;
			}
			else
			{
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}

	int i = a.length();
	int j = b.length();
	string ret = "";

	while (i >= 1 && j >= 1)
	{
		if (dp[i][j] > dp[i - 1][j] && dp[i - 1][j] == dp[i][j - 1] && dp[i][j - 1] == dp[i - 1][j - 1])
		{
			ret += b[j - 1];
			j--;
			i--;
		}
		else if (dp[i][j] == dp[i - 1][j] && dp[i - 1][j] > dp[i][j - 1])
		{
			i--;
		}
		else if (dp[i][j] == dp[i][j - 1] && dp[i][j - 1] > dp[i - 1][j])
		{
			j--;
		}
		else
		{
			j--;
		}
	}

	reverse(ret.begin(), ret.end());

	if (dp[a.length()][b.length()] != 0)
	{
		cout << dp[a.length()][b.length()] << "\n" << ret;
	}
	else
	{
		cout << "0";
	}

	return 0;
}