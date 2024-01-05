#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// 기타를 시리얼 번호 순서대로 정렬하고자 한다.
	// 모든 시리얼 번호는 알파벳 대문자와 숫자로 이루어져 있다.
	
	// 1. 길이가 짧은 것이 먼저 온다.
	// 2. (1의 조건이 같다면)숫자의 합이 작은 것이 앞에 온다.
	// 3. (1, 2의 조건이 같다면)사전순으로 비교한다. 숫자가 알파벳보다 사전순으로 작다.

	int N;
	string Guitars[50];

	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		string GuitarSerialNum;
		cin >> GuitarSerialNum;
		Guitars[i] = GuitarSerialNum;
	}

	for (int i = 0; i < (N - 1); ++i)
	{
		for (int j = i + 1; j < N; ++j)
		{
			if (Guitars[i].size() == Guitars[j].size())
			{
				int Num1(0), Num2(0);

				for (int k = 0; k < Guitars[i].size(); ++k)
				{
					if (Guitars[i][k] >= 48 && Guitars[i][k] <= 57)
					{
						Num1 += (Guitars[i][k] - '0');
					}
					if (Guitars[j][k] >= 48 && Guitars[j][k] <= 57)
					{
						Num2 += (Guitars[j][k] - '0');
					}
				}

				if (Num1 == Num2)
				{
					for (int k = 0; k < Guitars[i].size(); ++k)
					{
						if (Guitars[i][k] == Guitars[j][k])
						{
							continue;
						}
						else
						{
							if (Guitars[i][k] > Guitars[j][k])
							{
								string Temp;
								Temp = Guitars[i];
								Guitars[i] = Guitars[j];
								Guitars[j] = Temp;

								break;
							}
							else
							{
								break;
							}
						}
					}
				}
				else
				{
					if (Num1 > Num2)
					{
						string Temp;
						Temp = Guitars[i];
						Guitars[i] = Guitars[j];
						Guitars[j] = Temp;
					}
				}
			}
			else
			{
				if (Guitars[i].size() > Guitars[j].size())
				{
					string Temp;
					Temp = Guitars[i];
					Guitars[i] = Guitars[j];
					Guitars[j] = Temp;
				}
			}
		}
	}

	for (int i = 0; i < N; ++i)
	{
		cout << Guitars[i] << endl;
	}

	return 0;
}