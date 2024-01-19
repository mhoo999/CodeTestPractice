#include <iostream>
#include <vector>
#include <algorithm>

#define MAX 1000002
using namespace std;

int N, M;
vector<pair<int, pair<int, int>>> vec;
int parent[MAX];
int answer = 0;
int buildCount = 0;

int FindParent(int x)
{
	return (parent[x] == x) ? x : parent[x] = FindParent(parent[x]);
}

bool SameParent(int x, int y)
{
	x = FindParent(x);
	y = FindParent(y);

	return (x == y);
}

void Union(int x, int y)
{
	x = FindParent(x);
	y = FindParent(y);

	parent[y] = x;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);

	cin >> N >> M;

	while (M--)
	{
		int from, to, core;
		cin >> from >> to >> core;

		vec.push_back(make_pair(core, make_pair(from, to)));
	}

	sort(vec.begin(), vec.end());

	for (int i = 1; i <= N; ++i)
	{
		parent[i] = i;
	}

	for (int i = 0; i < vec.size(); ++i)
	{
		// 길이 이어졌을 때 나가기
		if (buildCount == (N - 2))
		{
			break;
		}

		if (!SameParent(vec[i].second.first, vec[i].second.second))
		{
			buildCount++;
			Union(vec[i].second.first, vec[i].second.second);
			answer += vec[i].first;
		}

	}

	cout << answer;

	return 0;
}