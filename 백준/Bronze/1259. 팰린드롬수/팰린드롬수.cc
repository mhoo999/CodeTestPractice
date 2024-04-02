#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> ans;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int x;

	while (true)
	{
		cin >> x;
		if (x == 0)
		{
			break;
		}

		string x_string = to_string(x);

		bool result = false;
		int i = 0;
		int j = x_string.size() - 1;

		while (i <= j)
		{
			if (x_string[i] == x_string[j])
			{
				result = true;
				i++;
				j--;
			}
			else
			{
				result = false;
				break;
			}
		}

		if (result == true)
		{
			ans.push_back("yes");
		}
		else
		{
			ans.push_back("no");
		}

	}

	for (int i = 0; i < ans.size(); ++i)
	{
		cout << ans[i] << '\n';
	}

	return 0;
}