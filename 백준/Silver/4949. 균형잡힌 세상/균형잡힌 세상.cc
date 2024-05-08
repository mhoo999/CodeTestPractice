#include <iostream>
#include <string>
#include <stack>

using namespace std;

string str;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	while (true)
	{
		getline(cin, str);
		stack<char> s;

		if (str[0] == '.')
		{
			break;
		}

		for (int i = 0; i < str.length() - 1; ++i)
		{
			if (str[i] == '(')
			{
				s.push('(');
			}
			if (str[i] == '[')
			{
				s.push('[');
			}
			if (str[i] == ')')
			{
				if (!s.empty() && s.top() == '(')
				{
					s.pop();
				}
				else
				{
					cout << "no" << '\n';
					break;
				}
			}
			if (str[i] == ']')
			{
				if (!s.empty() && s.top() == '[')
				{
					s.pop();
				}
				else
				{
					cout << "no" << '\n';
					break;
				}
			}

			if (s.empty() && i == str.length() - 2)
			{
				cout << "yes" << '\n';
			}
			else if (!s.empty() && i == str.length() - 2)
			{
				cout << "no" << '\n';
			}
		}
	}

	return 0;
}