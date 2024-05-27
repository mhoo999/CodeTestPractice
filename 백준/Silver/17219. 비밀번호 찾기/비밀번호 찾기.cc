#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

unordered_map<string, string> addressBook;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	while (n--)
	{
		string address, password;
		cin >> address >> password;

		addressBook.insert(make_pair(address, password));
	}

	while (m--)
	{
		string address;
		cin >> address;

		auto it = addressBook.find(address);
		if (it != addressBook.end())
		{
			cout << it->second << '\n';
		}
	}

	return 0;
}