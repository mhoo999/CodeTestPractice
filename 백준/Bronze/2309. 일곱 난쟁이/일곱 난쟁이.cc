#include <algorithm>
#include <iostream>

using namespace std;

int arr[9];

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int total = 0;

	for (int i = 0; i < 9; ++i)
	{
		int x;
		cin >> x;
		arr[i] = x;
		total += x;
	}

	int target = total - 100;
	bool found = false;

	for (int i = 0; i < 8; ++i)
	{
		for (int j = 1; j < 9; ++j)
		{
			if (i == j)
			{
				continue;
			}

			if (arr[i] + arr[j] == target)
			{
				arr[i] = 0;
				arr[j] = 0;
				found = true;

				break;
			}
		}

		if (found == true)
		{
			break;
		}
	}

	sort(arr, arr + 9);


	for (int i = 0; i < 9; ++i)
	{
		if (arr[i] == 0)
		{
			continue;
		}

		cout << arr[i] << '\n';
	}

	return 0;
}