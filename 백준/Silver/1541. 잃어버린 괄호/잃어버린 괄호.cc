#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	string N;
	cin >> N;

	int result = 0;
	string num;
	bool isMinus = false;

	for (int i = 0; i <= N.size(); ++i)
	{
		if (N[i] == '-' || N[i] == '+' || i == N.size())
		{
			if (isMinus)
			{
				result -= stoi(num);
				num = "";
			}
			else
			{
				result += stoi(num);
				num = "";
			}
		}
		else
		{
			num += N[i];
		}

		if (N[i] == '-')
		{
			isMinus = true;
		}
	}

	cout << result;

	return 0;
}