#include <iostream>
#include <stack>

using namespace std;

int N, T, cnt = 1;
stack<int> s;

int main()
{
	cin >> N;

	while (N--)
	{
		cin >> T;

		if (T == cnt) cnt++;
		else s.push(T);

		while (!s.empty() && s.top() == cnt)
		{
			s.pop();
			cnt++;
		}
	}

	if (s.empty()) cout << "Nice";
	else cout << "Sad";

	return 0;
}