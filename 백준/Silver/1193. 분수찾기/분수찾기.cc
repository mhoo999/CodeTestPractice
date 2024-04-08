#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	int i = 1;

	cin >> N;

	while (N > i)
	{
		N -= i;
		i++;
	}

	if (i % 2 == 1)
	{
		cout << i + 1 - N << '/' << N;
	}
	else
	{
		cout << N << '/' << i + 1 - N;
	}

	return 0;
}