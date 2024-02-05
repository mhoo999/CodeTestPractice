#include <iostream>
#include <vector>

using namespace std;

struct node
{
	char left;
	char right;
};

int N;
vector<node> vec(26);

void preOrder(char node)
{
	if (node == '.')
	{
		return;
	}

	cout << node;
	preOrder(vec[node - 'A'].left);
	preOrder(vec[node - 'A'].right);
}

void inOrder(char node)
{
	if (node == '.')
	{
		return;
	}

	inOrder(vec[node - 'A'].left);
	cout << node;
	inOrder(vec[node - 'A'].right);
}

void postOrder(char node)
{
	if (node == '.')
	{
		return;
	}

	postOrder(vec[node - 'A'].left);
	postOrder(vec[node - 'A'].right);
	cout << node;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N;

	for(int i = 0; i < N; ++i)
	{
		char parent, leftChild, RightChild;
		cin >> parent >> leftChild >> RightChild;

		vec[parent - 'A'].left = leftChild;
		vec[parent - 'A'].right = RightChild;
	}

	preOrder('A');
	cout << "\n";
	inOrder('A');
	cout << "\n";
	postOrder('A');

	return 0;
}