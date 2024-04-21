#include <iostream>
#include <string>

using namespace std;

bool arr[21] = { false };

void all()
{
	fill(begin(arr), end(arr), true);
}

void empty()
{
	fill(begin(arr), end(arr), false);
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(nullptr);

	string oper;
	int m, x;
	cin >> m;

    while (m--)
    {
        cin >> oper;

        if (oper == "add")
        {
			cin >> x;
			arr[x] = true;
        }
		else if (oper == "remove")
		{
			cin >> x;
			arr[x] = false;
		}
		else if (oper == "check")
		{
			cin >> x;
			cout << arr[x] << '\n';
		}
		else if (oper == "toggle")
		{
			cin >> x;
			arr[x] = !arr[x];
		}
		else if (oper == "all")
		{
			all();
		}
		else
		{
			empty();
		}
    }

	return 0;
}