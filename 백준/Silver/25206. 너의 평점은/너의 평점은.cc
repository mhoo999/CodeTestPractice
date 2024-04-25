#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	double totalSum = 0;
	double totalScore = 0;

	for (int i = 0; i < 20; ++i)
	{
		string subject, grade;
		double score;

		cin >> subject >> score >> grade;

		if (grade == "P")
		{
			continue;
		}

		if (grade == "A+")
		{
			totalSum += (4.5 * score);
		}
		else if (grade == "A0")
		{
			totalSum += (4.0 * score);
		}
		else if (grade == "B+")
		{
			totalSum += (3.5 * score);
		}
		else if (grade == "B0")
		{
			totalSum += (3.0 * score);
		}
		else if (grade == "C+")
		{
			totalSum += (2.5 * score);
		}
		else if (grade == "C0")
		{
			totalSum += (2.0 * score);
		}
		else if (grade == "D+")
		{
			totalSum += (1.5 * score);
		}
		else if (grade == "D0")
		{
			totalSum += (1.0 * score);
		}
		else
		{
			totalSum += (0.0 * score);
		}

		totalScore += score;
	}

	cout << setprecision(7);
	cout << (totalSum / totalScore);

	return 0;
}