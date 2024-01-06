#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int N, M, a, b;
vector<int> vec[32001];
int inDegree[100001] = { 0 };
int result[32001];

void topologySort()
{
	queue<int> q;

	for (int i = 1; i <= N; ++i)
	{
		if (inDegree[i] == 0)
		{
			q.push(i);
		}
	}

	for (int i = 1; i <= N; ++i)
	{
		if (q.empty())
		{
			break;
		}

		int x = q.front();
		q.pop();
		result[i] = x;

		for (int j = 0; j < vec[x].size(); ++j)
		{
			int y = vec[x][j];
			if (--inDegree[y] == 0)
			{
				q.push(y);
			}
		}
	}

	for (int i = 1; i <= N; ++i)
	{
		cout << result[i] << " ";
	}
}

int main()
{
	// N명의 학생들을 키 순서대로 줄을 세워야 함
	// 일부 학생의 키를 비교한 값을 입력
	// 학생들을 앞에서부터 줄을 세운 결과를 출력

	cin >> N >> M;

	for (int i = 0; i < M; ++i)
	{
		cin >> a >> b;
		vec[a].push_back(b);
		inDegree[b]++;
	}

	topologySort();

	return 0;
}