#include <iostream>

using namespace std;

int main()
{
    int Students[30];
    int SumitTask[28];

    for (int i = 0; i < 30; ++i)
    {
        Students[i] = i + 1;
    }

    for (int i = 0; i < 28; ++i)
    {
        cin >> SumitTask[i];
    }

    for (int i = 0; i < 30; ++i)
    {
        for (int j = 0; j < 28; ++j)
        {
            if (Students[i] == SumitTask[j])
                Students[i] = 0;
        }
    }

    for (int i = 0; i < 30; ++i)
    {
        if (Students[i] != 0)
            cout << Students[i] << endl;
    }
}