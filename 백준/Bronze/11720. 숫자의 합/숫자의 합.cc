#include <iostream>

using namespace std;

int main() {
	
	int n;
	cin >> n;

	string String;
	cin >> String;

	int Total = 0;

	for (int i = 0; i < n; ++i)
	{
		Total += String[i] - 48;
	}

	cout << Total;
}