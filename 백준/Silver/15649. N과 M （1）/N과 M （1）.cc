#include <iostream>

#define MAX 9
using namespace std;

int N, M;
int arr[MAX] = { 0, };
bool visit[MAX] = { 0, };

void dfs(int cnt)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	if (cnt == M)
	{
		for (int i = 0; i < M; ++i)
		{
			cout << arr[i] << " ";
		}

		cout << "\n";
		return;
	}

	for (int i = 1; i <= N; ++i)
	{
		if (!visit[i])
		{
			visit[i] = true;
			arr[cnt] = i;
			dfs(cnt + 1);
			visit[i] = false;
		}
	}
}

int main()
{
	cin >> N >> M;

	dfs(0);

	return 0;
}