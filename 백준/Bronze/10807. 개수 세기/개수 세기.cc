#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int Numbers[100];

    for (int i = 0; i < n; ++i)
    {
        cin >> Numbers[i];
    }

    int v;
    cin >> v;

    int Count = 0;
    for (int i = 0; i < n; ++i)
    {
        if (Numbers[i] == v)
            Count += 1;
    }

    cout << Count;
}