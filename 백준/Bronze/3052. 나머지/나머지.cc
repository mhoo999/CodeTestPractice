#include <iostream>

using namespace std;

int main() {
	
	int Array[10];

	for (int i = 0; i < 10; ++i)
	{
		cin >> Array[i];
		Array[i] = Array[i] % 42;
	}

	int Count = 0;

	for (int i = 0; i < 10; ++i)
	{
		int DiscardValue = 0;

		for (int j = (i + 1); j < 10; ++j)
		{
			if (Array[i] == Array[j])
				DiscardValue++;
		}

		if (DiscardValue == 0)
			Count++;
	}

	cout << Count;
}