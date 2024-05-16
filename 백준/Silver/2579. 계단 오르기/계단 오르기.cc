#include <iostream>

using namespace std;

int stair[301];
int arr[301];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		int x;
		cin >> x;

		stair[i] = x;
	}

	arr[1] = stair[1];
	arr[2] = stair[1] + stair[2];
	arr[3] = stair[3] + max(stair[1], stair[2]);

	for (int i = 4; i <= n; ++i)
	{
		arr[i] = stair[i] + max(arr[i - 3] + stair[i - 1], arr[i - 2]);
	}

	cout << arr[n];

	return 0;
}