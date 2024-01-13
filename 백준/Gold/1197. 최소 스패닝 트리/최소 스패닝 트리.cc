#include <iostream>
#include <vector>
#include <algorithm>

#define endl "\n"
#define MAX 10000 + 1
using namespace std;

int V, E, answer;
int parent[MAX];
vector<pair<int, pair<int, int>>> vec;

int Find(int x)
{
	return (parent[x] == x) ? x : parent[x] = Find(parent[x]);
}

bool SameParent(int x, int y)
{
	x = Find(x);
	y = Find(y);

	return (x == y) ? true : false;
}

void Union(int x, int y)
{
	x = Find(x);
	y = Find(y);

	parent[y] = x;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> V >> E;

	for (int i = 0; i < E; ++i)
	{
		int from, to, core;
		cin >> from >> to >> core;

		vec.push_back(make_pair(core, make_pair(from, to)));
	}

	sort(vec.begin(), vec.end());

	for (int i = 1; i <= V; ++i)
	{
		parent[i] = i;
	}

	for (int i = 0; i < E; ++i)
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