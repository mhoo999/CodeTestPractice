#include <iostream>

using namespace std;

int N;
int Count = 0;

int main()
{
	// 0 <= N <= 99
	// 만약 10 보다 작다면 앞에 0을 붙여 두 자리 수로 만든다.
	// 각 자리의 숫자를 더하고, 주어진 수의 가장 오른쪽 자리 수와 앞에서 구한 합의 가장 오른쪽 자리 수를 이어 붙인다.
	// 다시 원래의 수로 돌아오는 데 걸리는 사이클의 길이를 구하는 프로그램을 작성.

	cin >> N;

	int newInt;
	int num1 = N / 10;
	int num2 = N % 10;

	if (N < 10)
	{
		newInt = num2 * 11;
		num1 = newInt / 10;
		num2 = newInt % 10;
	}
	else
	{
		newInt = num1 + num2;
		num1 = num2;
		num2 = newInt % 10;
	}

	Count++;

	while ((num1 * 10 + num2) != N)
	{
		newInt = num1 + num2;
		num1 = num2;
		num2 = newInt % 10;
		Count++;
	}

	cout << Count;

	return 0;
}