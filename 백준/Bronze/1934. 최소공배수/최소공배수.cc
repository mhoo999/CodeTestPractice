#include <iostream>
#include <vector>

using namespace std;

vector<int> ans;

void LCM(const int x, const int y)
{
	int a = x > y ? x : y;
	int b = x > y ? y : x;

	int r = a % b;

	while (r != 0)
	{
		a = b;
		b = r;
		r = a % b;
	}

	ans.push_back(x * y / b);
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int T;
	cin >> T;

	for (int i = 0; i < T; ++i)
	{
		int a, b;
		cin >> a >> b;

		LCM(a, b);
	}

	for (int i = 0; i < ans.size(); ++i)
	{
		cout << ans[i] << '\n';
	}

	return 0;
}