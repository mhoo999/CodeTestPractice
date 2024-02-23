#include <iostream>

using namespace std;

int Timer[3] = { 300, 60, 10 };
int click[3] = { 0 };

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int T;
	cin >> T;

	for (int i = 0; i < 3; ++i)
	{
		if (T <= 0) break;
		if (T < Timer[i]) continue;

		click[i] = T / Timer[i];
		T = T % Timer[i];
	}

	if (T == 0)
	{
		for (int i = 0; i < 3; ++i)
		{
			cout << click[i] << " ";
		}
	}
	else
	{
		cout << "-1";
	}

	return 0;
}