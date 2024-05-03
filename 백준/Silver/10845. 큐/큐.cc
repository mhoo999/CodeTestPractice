#include <iostream>
#include <string>
#include <memory>

using namespace	std;

struct node
{
	int data;
	shared_ptr<node> prevNode;
	shared_ptr<node> nextNode;

	node(int x) : data(x), prevNode(nullptr), nextNode(nullptr) {}
};

class queue
{
	shared_ptr<node> front;
	shared_ptr<node> back;
	int size;

public:
	queue() : front(nullptr), back(nullptr), size(0) {}

	void Push(int x)
	{
		auto newNode = make_shared<node>(x);

		if (size == 0)
		{
			front = newNode;
			back = newNode;
		}
		else
		{
			back->nextNode = newNode;
			newNode->prevNode = back;

			back = newNode;
		}

		size++;
	}

	void Pop()
	{
		if (size == 0)
		{
			cout << "-1" << '\n';
		}
		else
		{
			cout << front->data << '\n';
			
			front = front->nextNode;
			if (front != nullptr) {
				front->prevNode = nullptr;
			}

			size--;

			if (size == 0) {
				back = nullptr;
			}
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
		cout << (size == 0 ? -1 : front->data) << '\n';
	}

	void Back()
	{
		cout << (size == 0 ? -1 : back->data) << '\n';
	}
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	auto q = make_unique<queue>();

	int n, x;
	cin >> n;

	while (n--)
	{
		string order;
		cin >> order;

		if (order == "push")
		{
			cin >> x;
			q->Push(x);
		}
		else if (order == "pop")
		{
			q->Pop();
		}
		else if (order == "size")
		{
			q->Size();
		}
		else if (order == "empty")
		{
			q->Empty();
		}
		else if (order == "front")
		{
			q->Front();
		}
		else
		{
			q->Back();
		}
	}

	return 0;
}