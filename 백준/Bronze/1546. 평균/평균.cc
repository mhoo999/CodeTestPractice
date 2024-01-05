#include <iostream>

using namespace std;

int main() {
	
	double SubjectCount;
	cin >> SubjectCount;

	double Subject[1000];

	for (int i = 0; i < SubjectCount; ++i)
		cin >> Subject[i];

	int Max = Subject[0];

	for (int i = 0; i < SubjectCount; ++i)
	{
		for (int j = (i + 1); j < SubjectCount; ++j)
		{
			if (Subject[j] > Max)
				Max = Subject[j];
		}
	}

	// cout << Max << endl;

	double Total = 0;

	for (int i = 0; i < SubjectCount; ++i)
	{
		Total += Subject[i] / Max * 100;
	}

	// for (int i = 0; i < SubjectCount; ++i)
	// 	cout << Subject[i] << " ";

	cout << Total / SubjectCount;
}