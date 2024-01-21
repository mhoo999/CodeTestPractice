#include <iostream>
#include <string>
#include <vector>

using namespace std;

int answer = 0;
vector<int> pos;

vector<int> FailFunc(string& P)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int pLen = P.length();
	vector<int> failVec(pLen, 0);
	int j = 0;

	for (int i = 1; i < pLen; ++i)
	{
		while (j > 0 && P[j] != P[i])
		{
			j = failVec[j - 1];
		}
		if (P[j] == P[i])
		{
			failVec[i] = ++j;
		}
	}

	return failVec;
}

void KMP(string& T, string& P)
{
	vector<int> failVec = FailFunc(P);
	int j = 0;

	for (int i = 0; i < T.length(); ++i)
	{
		while (j > 0 && T[i] != P[j])
		{
			j = failVec[j - 1];
		}
		if (T[i] == P[j])
		{
			if (j == (P.length()-1))
			{
				answer += 1;
				pos.push_back(i - (P.length()-2));
				j = failVec[j];
			}
			else
			{
				++j;
			}
		}
	}
}

int main()
{
	string T, P;

	getline(cin, T);
	getline(cin, P);

	KMP(T, P);

	cout << answer << "\n";

	for (int i = 0; i < pos.size(); ++i)
	{
		cout << pos[i] << " ";
	}

	return 0;
}