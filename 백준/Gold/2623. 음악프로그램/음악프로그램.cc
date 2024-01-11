#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

// 가수의 수 N, PD의 수 M, PD가 담당한 가수 수, 가수 순서
int N, M, a, b, c;
vector<int> vec[1001];
int inDegree[1001];
queue<int> q;
int visit[1001] = { 0 };
int stack = 0;
bool hasCycle = false;
vector<int> result;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N >> M;

	for (int i = 1; i <= M; ++i)
	{
		cin >> a;

		for (int j = 0; j < a; ++j)
		{
			cin >> b;

			if (j == 0)
			{
				c = b;
				continue;
			}

			vec[c].push_back(b);
			inDegree[b]++;

			c = b;
		}
	}

	// 마지막 원소에 값이 있다면 0을 반환(순환하는 그래프라면...)
	for (int i = 1; i <= N; ++i)
	{
		if (inDegree[i] == 0)
		{
			q.push(i);
		}
	}

	while (!q.empty())
	{
		int x = q.front();
		q.pop();
		result.push_back(x);

		for (int j = 0; j < vec[x].size(); ++j)
		{
			int y = vec[x][j];
			if (--inDegree[y] == 0)
			{
				q.push(y);
			}
		}
	}

	if (result.size() != N)
	{
		cout << 0;
	}
	else
	{
		for (int i = 0; i < result.size(); ++i)
		{
			cout << result[i] << "\n";
		}
	}

	return 0;
}