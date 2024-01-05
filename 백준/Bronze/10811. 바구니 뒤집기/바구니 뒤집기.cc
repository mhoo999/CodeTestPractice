#include <iostream>

using namespace std;

int main() {
	
	int BasketCount, FlipCount;
	cin >> BasketCount >> FlipCount;

	int Basket[100];

	for (int i = 0; i < BasketCount; ++i)
		Basket[i] = i + 1;

	int FirstNum[100];
	int LastNum[100];

	for (int i = 0; i < FlipCount; ++i)
		cin >> FirstNum[i] >> LastNum[i];

	for (int i = 0; i < FlipCount; ++i)
	{
		for (int j = 0; j < (LastNum[i] - FirstNum[i]); ++j)
		{
			int Temp = 0;
			int First = FirstNum[i] - 1;
			int Last = LastNum[i] - 1;

			if ((First + j) < (Last - j))
			{
				Temp = Basket[First + j];
				Basket[First + j] = Basket[Last - j];
				Basket[Last - j] = Temp;
			}
		}
	}

	for (int i = 0; i < BasketCount; ++i)
		cout << Basket[i] << " ";
}