#include <iostream>
#include <vector>
#include <algorithm>

#define MAX 1001
using namespace std;

int N;
int parent[MAX];
int map[MAX][MAX];
vector<pair<int, pair<int, int>>> vec;
long long answer = 0;

int FindParent(int x)
{
	return parent[x] == x ? x : parent[x] = FindParent(parent[x]);
}

bool SameParent(int x, int y)
{
	x = FindParent(x);
	y = FindParent(y);

	return x == y;
}

void Union(int x, int y)
{
	x = FindParent(x);
	y = FindParent(y);

	parent[y] = x;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N;

	// 시간을 줄이기 위해 미리 Capacity를 할당
	vec.reserve(N * N + 1);

	for (int i = 1; i <= N; ++i)
	{
		for (int j = 1; j <= N; ++j)
		{
			cin >> map[i][j];
		}
	}

	for (int i = 0; i < N; ++i)
	{
		parent[i] = i;
	}

	for (int i = 1; i <= N; ++i)
	{
		for (int j = i + 1; j <= N; ++j)
		{
			vec.push_back(make_pair(map[i][j], make_pair(i, j)));
		}
	}

	sort(vec.begin(), vec.end());


	for (int i = 0; i < vec.size(); ++i)
	{
		if (!SameParent(vec[i].second.first, vec[i].second.second))
		{
			Union(vec[i].second.first, vec[i].second.second);
			answer += vec[i].first;
		}
	}

	cout << answer;

	return 0;
}