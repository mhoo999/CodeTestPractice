#include <iostream>

#define MAX 1001
using namespace std;

int N;
int list[MAX];
int buff[MAX];

void merge(int data[], int left, int mid, int right)
{
	int i = left, j = mid + 1, k = left;
	while (i <= mid && j <= right)
	{
		if (data[i] <= data[j])
		{
			buff[k++] = data[i++];
		}
		else
		{
			buff[k++] = data[j++];
		}
	}

	while (i <= mid)
	{
		buff[k++] = data[i++];
	}

	while (j <= right)
	{
		buff[k++] = data[j++];
	}

	for (int x = left; x <= right; x++)
	{
		data[x] = buff[x];
	}
}

void mergeSort(int data[], int left, int right)
{
	int mid;

	if (left < right)
	{
		mid = (left + right) / 2;
		mergeSort(data, left, mid);
		mergeSort(data, mid + 1, right);
		merge(data, left, mid, right);
	}
}

int main()
{
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		cin >> list[i];
	}

	mergeSort(list, 0, N-1);

	for (int i = 0; i < N; ++i)
	{
		cout << list[i] << "\n";
	}

	return 0;
}