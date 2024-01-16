#include <iostream>
#include <vector>
#include <algorithm>

#define endl "\n"
#define MAX 1001
using namespace std;

int N, M;
vector<pair<int, pair<int, int>>> cable;
int parent[MAX];
int answer = 0;

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
	cin >> N >> M;

	while (M--)
	{
		int a, b, c;
		cin >> a >> b >> c;

		cable.push_back(make_pair(c, make_pair(a, b)));
	}

	sort(cable.begin(), cable.end());

	for (int i = 0; i < N; ++i)
	{
		parent[i] = i;
	}

	for (int i = 0; i < cable.size(); ++i)
	{
		if (!SameParent(cable[i].second.first, cable[i].second.second))
		{
			Union(cable[i].second.first, cable[i].second.second);
			answer += cable[i].first;
		}
	}

	cout << answer;

	return 0;
}