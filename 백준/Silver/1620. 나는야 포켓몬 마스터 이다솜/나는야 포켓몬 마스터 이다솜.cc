#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

string book[100001];
unordered_map<string, int> bookIdx;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= n; ++i)
	{
		string name;
		cin >> name;

		book[i] = name;
		bookIdx[name] = i;
	}

	while (m--)
	{
		string s;
		cin >> s;

		if (isdigit(s[0]))
		{
			int num = stoi(s);

			cout << book[num] << '\n';
		}
		else
		{
			cout << bookIdx[s] << '\n';
		}
	}

	return 0;
}