#include <iostream>
#include <vector>

#define MAX 91
using namespace std;

vector<long long> ans;

int main()
{
	int N;
	cin >> N;

	for (int i = 0; i <= N; ++i)
	{
		if (i == 0)
		{
			ans.push_back(0);
		}
		else if (i == 1)
		{
			ans.push_back(1);
		}
		else
		{
			ans.push_back(ans[i - 2] + ans[i - 1]);
		}
	}

	cout << ans[N];

	return 0;
}