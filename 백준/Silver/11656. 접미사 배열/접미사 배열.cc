#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> vec;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;

	for (int i = 0; i < s.size(); ++i)
	{
		string suffix;

		for (int j = i; j < s.size(); ++j)
		{
			suffix += s[j];
		}

		vec.push_back(suffix);
	}

	sort(vec.begin(), vec.end());

	for (const string& iter : vec)
	{
		cout << iter << '\n';
	}

	return 0;
}