#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

vector<float> highRanker;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int C;
	cin >> C;
	while (C--)
	{
		int N;
		cin >> N;

		int scoreTotal = 0;
		vector<int> scoreBook;

		for (int i = 0; i < N; ++i)
		{
			int score;
			cin >> score;

			scoreBook.push_back(score);
			scoreTotal += score;
		}

		int average = scoreTotal / N;
		float highRankerCnt = 0;

		for (int i = 0; i < N; ++i)
		{
			if (scoreBook[i] > average)
			{
				highRankerCnt++;
			}
		}

		highRanker.push_back(highRankerCnt / N * 100);
	}

	for (int i = 0; i < highRanker.size(); ++i)
	{
		cout << fixed << setprecision(3) << highRanker[i] << '%' << '\n';
	}

	return 0;
}