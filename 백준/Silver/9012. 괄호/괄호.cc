#include <iostream>
#include <stack>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while (t--)
	{
		stack<int> st;

		string ps;
		cin >> ps;

		bool vps = true;

		for (int i = 0; i < ps.size(); ++i)
		{
			if (ps[i] == '(')
			{
				st.push(1);
			}
			else
			{
				if (st.empty())
				{
					vps = false;
				}
				else
				{
					st.pop();
				}
			}
		}

		if (!st.empty())
		{
			vps = false;
		}

		cout << ((vps == 1) ? "YES" : "NO") << '\n';
	}

	return 0;
}