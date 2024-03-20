#include <iostream>
#include <string.h>

using namespace std;

int arr[26];
char value[1000000];

int main()
{
	int max = 0;
	char ans;
	int size;

	cin >> value;
	size = strlen(value);

	for (int i = 0; i < size; ++i)
	{
		if (value[i] >= 'a')
		{
			arr[value[i] - 'a']++;
		}
		else
		{
			arr[value[i] - 'A']++;
		}
	}

	for (int i = 0; i < 26; ++i)
	{
		if (arr[i] == max)
		{
			ans = '?';
		}
		else if (arr[i] > max)
		{
			max = arr[i];
			ans = 'A' + i;
		}
	}

	cout << ans;

	return 0;
}