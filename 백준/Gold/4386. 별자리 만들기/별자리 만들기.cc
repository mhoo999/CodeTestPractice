#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

#define endl "\n"
#define MAX 101
using namespace std;

int n;
double answer;
vector<pair<double, double>> coord;
vector<pair<double, pair<int, int>>> vec;
int parent[MAX];

double GetDistance(double x, double y, double xx, double yy)
{
	double x2 = (x - xx) * (x - xx);
	double y2 = (y - yy) * (y - yy);

	return sqrt(x2 + y2);
}

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
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		double a, b;
		cin >> a >> b;

		coord.push_back(make_pair(a, b));
	}

	for (int i = 0; i < coord.size(); ++i)
	{
		double x = coord[i].first;
		double y = coord[i].second;

		for (int j = i + 1; j < coord.size(); ++j)
		{
			double xx = coord[j].first;
			double yy = coord[j].second;

			double dist = GetDistance(x, y, xx, yy);
			vec.push_back(make_pair(dist, make_pair(i, j)));
		}
	}

	sort(vec.begin(), vec.end());

	for (int i = 0; i < n; ++i)
	{
		parent[i] = i;
	}

	for (int i = 0; i < vec.size(); ++i)
	{
		if (!SameParent(vec[i].second.first, vec[i].second.second))
		{
			Union(vec[i].second.first, vec[i].second.second);
			answer += vec[i].first;
		}
	}

	cout << fixed;
	cout.precision(2);
	cout << answer;

	return 0;
}