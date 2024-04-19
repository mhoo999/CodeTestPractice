#include <iostream>
#include <unordered_set>

using namespace std;

unordered_set<int> cardSet;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N, M;
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		int x;
		cin >> x;

		cardSet.insert(x);
	}

	cin >> M;

	for (int i = 0; i < M; ++i)
	{
		int x;
		cin >> x;

		cout << (cardSet.count(x) == true ? 1 : 0) << ' ';
	}

	return 0;
}