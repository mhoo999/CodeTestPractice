#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> words;
vector<char> ans;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	for (int i = 0; i < 5; ++i)
	{
		string word;
		cin >> word;

		words.push_back(word);
		words[i].resize(15);
	}

	for (int i = 0; i < 15; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			if ((words[j][i] >= 48 && words[j][i] <= 57) || (words[j][i] >= 65 && words[j][i] <= 90) || (words[j][i] >= 97 && words[j][i] <= 122))
			{
				ans.push_back(words[j][i]);
			}
		}
	}

	for (int i = 0; i < ans.size(); ++i)
	{
		cout << ans[i];
	}

	return 0;
}