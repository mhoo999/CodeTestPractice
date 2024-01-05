#include <iostream>

using namespace std;

int main()
{
	// 연속해서 출력되는 문자 가진 단어를 그룹 단어라고 한다.
	// 단어 N개를 입력 받아 그룹 단어의 합계를 출력하는 프로그램을 작성하시오.

	int N;
	int Answer = 0;

	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		string Voca;
		cin >> Voca;
		int IsNotCouter = 0;

		for (int j = 0; j < Voca.size() - 1; ++j)
		{
			for (int k = j + 1; k < Voca.size(); ++k)
			{
				if (Voca[j] == Voca[k] && (Voca[j + 1] != Voca[j]))
				{
					IsNotCouter++;
				}
			}
		}

		if (IsNotCouter == 0)
		{
			Answer++;
		}
	}

	cout << Answer;

	return 0;
}