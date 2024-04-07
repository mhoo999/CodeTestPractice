#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

string arr[20001];

int cmp(string a, string b)
{
	if (a.length() == b.length())
	{
		return a < b;
	}
	else
	{
		return a.length() < b.length();
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		cin >> arr[i];
	}

	sort(arr, arr + N, cmp);

	for (int i = 0; i < N; ++i)
	{
		if (arr[i] == arr[i - 1])
		{
			continue;
		}
		else
		{
			cout << arr[i] << '\n';
		}
	}

	return 0;
}