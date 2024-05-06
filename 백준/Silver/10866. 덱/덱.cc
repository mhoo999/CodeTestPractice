#include <iostream>
#include <memory>
#include <string>

using namespace std;

struct Node
{
	int data;
	shared_ptr<Node> prevNode;
	shared_ptr<Node> nextNode;

	Node(int x) : data(x), prevNode(nullptr), nextNode(nullptr) {}
};

class Deck
{
	int size;
	shared_ptr<Node> front;
	shared_ptr<Node> back;

public:
	Deck() : size(0), front(nullptr), back(nullptr) {}

	void Push_front(int x)
	{
		auto newNode = make_shared<Node>(x);

		if (size < 1)
		{
			front = newNode;
			back = newNode;
		}
		else
		{
			front->prevNode = newNode;
			newNode->nextNode = front;
			front = newNode;
		}

		size++;
	}

	void Push_back(int x)
	{
		auto newNode = make_shared<Node>(x);

		if (size < 1)
		{
			front = newNode;
			back = newNode;
		}
		else
		{
			back->nextNode = newNode;
			newNode->prevNode= back;
			back = newNode;
		}

		size++;
	}

	void Pop_front()
	{
		if (size < 1)
		{
			cout << "-1" << '\n';
		}
		else
		{
			cout << front->data << '\n';

			if (size > 1)
			{
				front->nextNode->prevNode = nullptr;
				front = front->nextNode;
			}
			else
			{
				front = nullptr;
				back = nullptr;
			}

			size--;
		}
	}

	void Pop_back()
	{
		if (size < 1)
		{
			cout << "-1" << '\n';
		}
		else
		{
			cout << back->data << '\n';

			if (size > 1)
			{
				back->prevNode->nextNode = nullptr;
				back = back->prevNode;
			}
			else
			{
				front = nullptr;
				back = nullptr;
			}

			size--;
		}
	}

	void Size()
	{
		cout << size << '\n';
	}

	void Empty()
	{
		cout << (size == 0 ? 1 : 0) << '\n';
	}

	void Front()
	{
		if (size < 1)
		{
			cout << "-1" << '\n';
		}
		else
		{
			cout << front->data << '\n';
		}
	}

	void Back()
	{
		if (size < 1)
		{
			cout << "-1" << '\n';
		}
		else
		{
			cout << back->data << '\n';
		}
	}
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	auto newDeck = make_unique<Deck>();

	int n, x;
	cin >> n;

	while (n--)
	{
		string order;
		cin >> order;

		if (order == "push_front")
		{
			cin >> x;
			newDeck->Push_front(x);
		}
		else if (order == "push_back")
		{
			cin >> x;
			newDeck->Push_back(x);
		}
		else if (order == "pop_front")
		{
			newDeck->Pop_front();
		}
		else if (order == "pop_back")
		{
			newDeck->Pop_back();
		}
		else if (order == "size")
		{
			newDeck->Size();
		}
		else if (order == "empty")
		{
			newDeck->Empty();
		}
		else if (order == "front")
		{
			newDeck->Front();
		}
		else
		{
			newDeck->Back();
		}
	}

	return 0;
}