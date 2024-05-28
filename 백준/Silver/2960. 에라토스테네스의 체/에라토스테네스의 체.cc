#include <iostream>
#include <vector>

using namespace std;

vector<int> arr;
vector<int> deleteNum;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;

	for (int i = 2; i <= n; ++i)
	{
		arr.push_back(i);
	}

	while (deleteNum.size() < k)
	{
		int p = arr[0];

		for (int i = 0; i < arr.size();)
		{
			if (arr[i] % p == 0)
			{
				deleteNum.push_back(arr[i]);
				arr.erase(arr.begin() + i);
			}
			else
			{
				++i;
			}
		}
	}

	cout << deleteNum[k - 1];

	return 0;
}