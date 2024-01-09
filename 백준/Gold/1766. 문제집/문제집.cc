#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> vec[32002];
int inDegree[32002] = { 0 };
priority_queue<int, vector<int>, greater<int>> pq;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	for (int i = 0; i < M; ++i)
	{
		int a, b;
		cin >> a >> b;
		vec[a].push_back(b);
		inDegree[b]++;
	}

	for (int i = 1; i <= N; ++i)
	{
		if (inDegree[i] == 0)
		{
			pq.push(i);
		}
	}

	while (!pq.empty())
	{
		int x = pq.top();
		pq.pop();
		cout << x << " ";

		for (int i = 0; i < vec[x].size(); ++i)
		{
			int y = vec[x][i];
			if (--inDegree[y] == 0)
			{
				pq.push(y);
			}
		}
	}

	return 0;
}