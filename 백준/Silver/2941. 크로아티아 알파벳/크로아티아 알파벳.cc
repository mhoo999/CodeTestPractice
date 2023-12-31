#include <iostream>

using namespace std;

int main()
{
	string Word;
	cin >> Word;

	int index;
	string croatia[8]{"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	for (int i = 0; i < 8; ++i)
	{
		while (true)
		{
			index = Word.find(croatia[i]);
			if (index == string::npos)
				break;

			Word.replace(index, croatia[i].length(), "a");
		}
	}

	cout << Word.length();

	return 0;
}