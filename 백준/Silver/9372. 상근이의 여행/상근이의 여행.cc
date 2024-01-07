#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int T, N, M, a, b;
//vector<int> vec[10002];
//int visit[1003] = { 0 };
//int result = 0;

//void getAirplane(int x)
//{
//	visit[x] = 1;
//	queue<int> q;
//	q.push(x);
//
//	while (!q.empty())
//	{
//		int x = q.front();
//		q.pop();
//		result++;
//
//		for (int i = 0; i < vec[x].size(); ++i)
//		{
//			if (visit[vec[x][i]] == 0)
//			{
//				visit[vec[x][i]] = 1;
//				q.push(vec[x][i]);
//			}
//		}
//	}
//
//	cout << result - 1 << endl;
//}

int main()
{
	cin >> T;

	for (int i = 0; i < T; ++i)
	{
		cin >> N >> M;

		for (int j = 0; j < M; ++j)
		{
			cin >> a >> b;
		}

		cout << N - 1 << endl;
		//getAirplane(1);

		//result = 0;
		//fill(begin(visit), end(visit), 0);
		//// memset(visit, 0, sizeof(visit));
	}

	return 0;
}