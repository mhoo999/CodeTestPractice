#include <iostream>

#define MAX 10
using namespace std;

int ans[MAX];

int count_ways(int n)
{
	if (n < 0)
	{
		return 0;
	}
	else if(n == 0)
	{
		return 1;
	}
	else
	{
		return count_ways(n - 1) + count_ways(n - 2) + count_ways(n - 3);
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int T;
	cin >> T;

	for (int i = 0; i < T; ++i)
	{
		int N;
		cin >> N;

		ans[i] = count_ways(N);
	}

	for (int i = 0; i < T; ++i)
	{
		cout << ans[i] << "\n";
	}

	return 0;
}