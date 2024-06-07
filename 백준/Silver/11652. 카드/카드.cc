#include <iostream>
#include <unordered_map>
#include <limits>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    unordered_map<long long, int> freq;
    long long max_freq_number = numeric_limits<long long>::max();
    int max_freq = 0;

    while (n--)
    {
        long long x;
        cin >> x;

        freq[x]++;

        if (freq[x] > max_freq || (freq[x] == max_freq && x < max_freq_number))
        {
            max_freq = freq[x];
            max_freq_number = x;
        }
    }

    cout << max_freq_number;

    return 0;
}
