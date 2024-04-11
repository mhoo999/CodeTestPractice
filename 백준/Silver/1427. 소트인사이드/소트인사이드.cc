#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;
	string S = to_string(N);

	sort(S.rbegin(), S.rend());

	for (int i = 0; i < S.size(); ++i)
	{
		cout << S[i];
	}

	return 0;
}