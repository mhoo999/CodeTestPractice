#include <iostream>

using namespace std;

int main() {

	int A, B;
	cin >> A >> B;

	int C;
	cin >> C;

	if ((B + C) < 60)
		B += C;
	else
	{
		A += C / 60;
		B += C % 60;

		if (B >= 60)
		{
			A++;
			B = B % 60;
		}

		if (A >= 24)
		{
			A = A % 24;
		}
	}

	cout << A << " " << B;
}