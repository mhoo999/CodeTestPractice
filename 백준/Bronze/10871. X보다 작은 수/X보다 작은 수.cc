#include <iostream>

using namespace std;

int main()
{
    int n;
    int x;

    cin >> n >> x;

    int Numbers[10000];

    for (int i = 0; i < n; ++i)
        cin >> Numbers[i];

    int Count = 0;

    for (int i = 0; i < n; ++i)
    {
        if (Numbers[i] < x)
            Count += 1;
    }

    for (int i = 0; i < n; ++i)
    {
        if (Numbers[i] < x)
        {
            cout << Numbers[i] << " ";
        }
    }
}