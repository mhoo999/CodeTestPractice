#include <iostream>
#include <string>

using namespace std;

bool SelfNums[10001] {false};

void d(int i)
{
	int Result = i;

	string StringI = to_string(i);

	for (int i = 0; i < StringI.size(); ++i)
	{
		Result += (StringI[i] - '0');
	}

	if (Result <= 10'000)
	{
		SelfNums[Result] = true;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	// 10000보다 작거나 같은 셀프 넘버를 한 줄에 하나씩 출력하는 프로그램 작성
	// 생성자가 없는 숫자를 셀프 넘버라고 한다.
	// 양의 정수 n에 대해서 d(n)을 n과 n의 자리수를 더하는 함수로 만들어지는 숫자에서 n을 생성자라 한다.

	for (int i = 1; i < 10001; ++i)
	{
		d(i);
	}

	for (int i = 1; i < 10001; ++i)
	{
		if (SelfNums[i] == false)
		{
			cout << i << '\n';
		}
	}

	return 0;
}