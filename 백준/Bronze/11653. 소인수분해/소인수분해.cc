#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> vec;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N;
	cin >> N;

	for (int i = 2; i <= N; ++i)
	{
		if (N % i == 0)
		{
			vec.push_back(i);
			N /= i;
			i = 1;

			if (N == 1)
			{
				break;
			}
		}
	}

	sort(vec.begin(), vec.end());

	for (int i = 0; i < vec.size(); ++i)
	{
		cout << vec[i] << '\n';
	}

	return 0;
}