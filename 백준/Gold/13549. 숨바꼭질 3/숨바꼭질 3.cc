#include <iostream>
#include <queue>

using namespace std;

int N, K;
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
bool visit[100010];

int main()
{
	cin >> N >> K;

	pq.push(make_pair(0, N));

	while (!pq.empty())
	{
		int time = pq.top().first;
		int current = pq.top().second;
		pq.pop();

		visit[current] = true;

		if (current == K)
		{
			cout << time;
			break;
		}

		if (current - 1 >= 0 && !visit[current - 1])
		{
			pq.push(make_pair(time + 1, current - 1));
		}
		if (current + 1 <= 100000 && !visit[current + 1])
		{
			pq.push(make_pair(time + 1, current + 1));
		}
		if (current * 2 <= 100000 && !visit[current * 2])
		{
			pq.push(make_pair(time, current * 2));
		}

	}

	return 0;
}