#include <iostream>

using namespace std;

int main()
{
    int first, second;

    cin >> first >> second;

    int FirstPo = (first / 100) * 100;
    int SecondPo = ((first % 100) / 10) * 10;
    int ThirdPo = (first % 10) / 1;

    int FirstPo1 = second / 100;
    int SecondPo1 = (second % 100) / 10;
    int ThirdPo1 = (second % 10) / 1;

    cout << (FirstPo * ThirdPo1) + (SecondPo * ThirdPo1) + (ThirdPo * ThirdPo1) << endl;
    cout << (FirstPo * SecondPo1) + (SecondPo * SecondPo1) + (ThirdPo * SecondPo1) << endl;
    cout << (FirstPo * FirstPo1) + (SecondPo * FirstPo1) + (ThirdPo * FirstPo1) << endl;
    cout << first * second;
}