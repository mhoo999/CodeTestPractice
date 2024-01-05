#include <iostream>

using namespace std;

int main() {

	int MaxStarNum = 0;
	cin >> MaxStarNum;

	for (int i = 1; i <= MaxStarNum; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (int i = (MaxStarNum - 1); i > 0; --i)
	{
		for (int j = 0; j <= (i - 1); ++j)
		{
			cout << "*";
		}
		cout << endl;
	}
}