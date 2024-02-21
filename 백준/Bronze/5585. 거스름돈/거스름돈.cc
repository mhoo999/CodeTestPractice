#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N;
	cin >> N;
	
	int change = 1000 - N;
	int coin = 0;

	while (change >= 0)
	{
		if (change >= 500)
		{
			change -= 500;
			coin++;
		}
		else if (change < 500 && change >= 100)
		{
			change -= 100;
			coin++;
		}
		else if (change < 100 && change >= 50)
		{
			change -= 50;
			coin++;
		}
		else if (change < 50 && change >= 10)
		{
			change -= 10;
			coin++;
		}
		else if (change < 10 && change >= 5)
		{
			change -= 5;
			coin++;
		}
		else
		{
			change -= 1;
			coin++;
		}
	}

	cout << coin - 1;

	return 0;
}