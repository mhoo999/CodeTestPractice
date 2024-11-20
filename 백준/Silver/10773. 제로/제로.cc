#include <iostream>
#include <vector>

using namespace std;

vector<int> cashBook;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int k;
	cin >> k;

	while (k--)
	{
		int x;
		cin >> x;

		if (x == 0)
		{
			cashBook.pop_back();
		}
		else
		{
			cashBook.push_back(x);
		}
	}

	int ans = 0;

	for (int i = 0; i < cashBook.size(); ++i)
	{
		ans += cashBook[i];
	}

	cout << ans;

	return 0;
}