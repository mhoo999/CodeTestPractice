#include <iostream>
#include <string>
#include <vector>

#define MAX 360000
using namespace std;

vector<int> piFunc(vector<bool> pattern)
{
	int pLen = pattern.size();
	vector<int> pi(pLen, 0);
	int j = 0;

	for (int i = 1; i < pLen; ++i)
	{
		while (j > 0 && pattern[i] != pattern[j])
		{
			j = pi[j - 1];
		}
		if (pattern[i] == pattern[j])
		{
			pi[i] = ++j;
		}
	}

	return pi;
}

string KMP(vector<bool> text, vector<bool> pattern)
{
	int tLen = text.size();
	vector<int> pi = piFunc(pattern);
	int j = 0;

	for (int i = 0; i < tLen; ++i)
	{
		while (j > 0 && text[i] != pattern[j])
		{
			j = pi[j - 1];
		}
		if (text[i] == pattern[j])
		{
			if (j == pattern.size() - 1)
			{
				return "possible";
			}
			else
			{
				j++;
			}
		}
	}

	return "impossible";
}

int main()
{
	int N;
	cin >> N;

	vector<bool> text(MAX * 2, 0);
	vector<bool> pattern(MAX, 0);

	for (int i = 0; i < N; ++i)
	{
		int num;
		cin >> num;
		text[num] = text[MAX + num] = 1;
	}

	for (int i = 0; i < N; ++i)
	{
		int num;
		cin >> num;
		pattern[num] = 1;
	}

	cout << KMP(text, pattern);

	return 0;
}