#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int Solv(int L, string sign)
{
	vector<int> vec(L, 0);
	int j = 0;

	for (int i = 1; i < L; ++i)
	{
		while (j > 0 && sign[j] != sign[i])
		{
			j = vec[j - 1];
		}
		if (sign[j] == sign[i])
		{
			vec[i] = ++j;
		}
	}

	return L - vec[L-1];
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int L;
	string sign;

	cin >> L >> sign;

	cout << Solv(L, sign);

	return 0;
}