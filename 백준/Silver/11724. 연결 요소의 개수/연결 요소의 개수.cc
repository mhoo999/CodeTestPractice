#include <iostream>
#include <vector>
#include <queue>

#define MAX 1001
using namespace std;

vector<int> vec[MAX];
bool visit[MAX] = { 0 };
int answer = 0;

void DFS(int num)
{
	visit[num] = 1;
	queue<int> q;
	q.push(num);

	while (!q.empty())
	{
		int x = q.front();
		q.pop();

		for (int i = 0; i < vec[x].size(); ++i)
		{
			if (visit[vec[x][i]] == 0)
			{
				visit[vec[x][i]] = 1;
				q.push(vec[x][i]);
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	while (M--)
	{
		int a, b;
		cin >> a >> b;

		vec[a].push_back(b);
		vec[b].push_back(a);
	}

	for (int i = 1; i <= N; i++)
	{
		if (visit[i] == 0)
		{
			DFS(i);
			answer++;
		}
	}

	cout << answer;

	return 0;
}