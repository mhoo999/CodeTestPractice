#include <iostream>

using namespace std;

int main() {
	
	int Count;
	cin >> Count;

	for (int i = 0; i < Count; ++i)
	{
		string String;
		cin >> String;

		int Size = size(String);

		cout << String[0] << String[Size - 1] << endl;
	}
}