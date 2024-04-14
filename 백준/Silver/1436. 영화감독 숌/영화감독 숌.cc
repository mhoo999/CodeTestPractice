#include <iostream>
#include <string>

using namespace std;

int endNum[10001];

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;

	int iter = 1;
	int num = 666;

	while (iter <= N)
	{
		string toString = to_string(num);

		bool isEndNum = false;

		for (int i = 2; i < toString.size(); ++i)
		{
			if (toString[i] == '6' && toString[i - 1] == '6' && toString[i - 2] == '6')
			{
				isEndNum = true;
				break;
			}
		}

		if (isEndNum)
		{
			endNum[iter] = num;
			iter++;
		}

		num++;
	}

	cout << endNum[N];

	return 0;
}