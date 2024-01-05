#include <iostream>

using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;

    int Baskets[100];

    for (int i = 0; i < n; ++i)
        Baskets[i] = 0;

    for (int i = 0; i < m; ++i)
    {
        int Start = 0;
        int End = 0;
        int Ball = 0;

        cin >> Start >> End >> Ball;

        for (int j = (Start - 1); j < End; ++j)
        {
            Baskets[j] = Ball;
        }
    }

    for (int i = 0; i < n; ++i)
        cout << Baskets[i] << " ";
}