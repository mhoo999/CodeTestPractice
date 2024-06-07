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

	unordered_map<long long, int> arr;
	long long freq_num = numeric_limits<long long>::max();
	int max_freq = 0;

	while (n--)
	{
		long long x;
		cin >> x;

		arr[x]++;

		if (arr[x] > max_freq || (arr[x] == max_freq && x < freq_num))
		{
			max_freq = arr[x];
			freq_num = x;
		}
	}

	cout << freq_num;

	return 0;
}