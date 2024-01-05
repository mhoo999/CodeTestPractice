#include <iostream>

using namespace std;

int main() {
	
	while (true)
	{
		int A, B;
		cin >> A >> B;

		if ((A != 0) && (B != 0))
			cout << A + B << endl;
		else
			break;
	}
}