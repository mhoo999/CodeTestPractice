#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> FailFunc(string P)
{

	int pLen = (int)P.length();
	vector<int> failvec(pLen, 0);
	int j = 0;

	for (int i = 1; i < pLen; ++i)
	{
		while (j > 0 && P[i] != P[j])
		{
			j = failvec[j - 1];
		}
		if (P[i] == P[j])
		{
			failvec[i] = ++j;
		}
	}

	return failvec;
}

int KMP(string S, string P)
{
	vector<int> failvec = FailFunc(P);
	int j = 0;

	for (int i = 0; i < S.length(); ++i)
	{
		while (j > 0 && S[i] != P[j])
		{
			j = failvec[j - 1];
		}
		if (S[i] == P[j])
		{
			if (j == P.length()-1)
			{
				return 1;
			}
			else
			{
				j++;
			}
		}
	}

	return 0;
}

int main()
{
	string S, P;
	cin >> S >> P;

	cout << KMP(S, P);

	return 0;
}