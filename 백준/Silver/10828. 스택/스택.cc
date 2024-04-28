#include <iostream>
#include <stack>
#include <string>

using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	stack<int> st;

	int n;
	cin >> n;

	while (n--)
	{
		string oper;
		cin >> oper;

		if (oper == "push")
		{
			int x;
			cin >> x;
			st.push(x);
		}
		else if (oper == "pop")
		{
			if (!st.empty())
			{
				cout << st.top() << '\n';
				st.pop();
			}
			else
			{
				cout << "-1" << '\n';
			}

		}
		else if (oper == "size")
		{
			cout << st.size() << '\n';
		}
		else if (oper == "empty")
		{
			cout << (st.empty() ? '1' : '0') << '\n';
		}
		else
		{
			if (!st.empty())
			{
				cout << st.top() << '\n';
			}
			else
			{
				cout << "-1" << '\n';
			}
		}

	}

	return 0;
}