#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N, M;
vector<pair<int, int>> vec[101];
int ind[101];
int cnt[101];

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N >> M;

	for (int i = 0; i < M; ++i)
	{
		int x, y, z;
		cin >> x >> y >> z;

		vec[x].push_back(make_pair(y, z));
		ind[y]++;
	}

	vector<int> ans;
	queue<int> q;
	q.push(N);
	cnt[N] = 1;

	while (!q.empty())
	{
		int cur = q.front();
		q.pop();

		if (vec[cur].empty())
		{
			ans.push_back(cur);
		}

		for (auto p : vec[cur])
		{
			int next = p.first;
			int c = p.second;
			cnt[next] += cnt[cur] * c;
			if (--ind[next] == 0)
			{
				q.push(next);
			}
		}
	}

	sort(ans.begin(), ans.end());

	for (auto k : ans)
	{
		cout << k << " " << cnt[k] << "\n";
	}

	return 0;
}