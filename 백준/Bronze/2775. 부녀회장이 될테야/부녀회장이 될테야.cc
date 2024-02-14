#include <iostream>
#include <vector>

#define MAX 15
using namespace std;

int house[MAX][MAX];
vector<int> ans;

int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int k, n;
		cin >> k >> n;

		for (int i = 0; i <= 14; ++i)
		{
			for (int j = 1; j <= 14; ++j)
			{
				if (i == 0)
				{
					house[i][j] = j;
				}
				else
				{
					if (j == 1)
					{
						house[i][j] = house[i - 1][j];
					}
					else
					{
						house[i][j] = house[i - 1][j] + house[i][j - 1];
					}
				}
			}
		}

		ans.push_back(house[k][n]);
	}

	for (int i = 0; i < ans.size(); ++i)
	{
		cout << ans[i] << "\n";
	}

	return 0;
}