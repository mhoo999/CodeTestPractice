#include <iostream>
#include <string>
#include <vector>

using namespace std;
vector<string> testCase;

int main()
{
	for (int i = 0; i < 10; ++i)
	{
		string text;
		cin >> text;

		if (text == ".")
		{
			break;
		}

		testCase.push_back(text);
	}

	for (int i = 0; i < testCase.size(); ++i)
	{
		int len = testCase[i].size();
		vector<int> pattern(len, 0);
		int j = 0;

		for (int k = 1; k < len; ++k)
		{
			while (j > 0 && testCase[i][k] != testCase[i][j])
			{
				j = pattern[j - 1];
			}
			if (testCase[i][k] == testCase[i][j])
			{
				pattern[k] = ++j;
			}
		}

		int div = len - pattern[len - 1];
		if (len % div)
		{
			cout << "1" << "\n";
		}
		else
		{
			cout << len / div << "\n";
		}
	}

	return 0;
}