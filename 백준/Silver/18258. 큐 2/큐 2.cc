#include <iostream>
#include <string>
#include <memory>

using namespace std;

struct Node
{
    int data;
    Node* prevNode;
    unique_ptr<Node> nextNode;

    Node(int x) : data(x), prevNode(nullptr), nextNode(nullptr) {}
};

class Queue
{
    int size;
    unique_ptr<Node> front;
    Node* back;

public:
    Queue() : size(0), front(nullptr), back(nullptr) {}

    void Push(int x)
    {
        auto newNode = make_unique<Node>(x);
        Node* newRawNode = newNode.get();

        if (size < 1)
        {
            front = move(newNode);
            back = newRawNode;
        }
        else
        {
            back->nextNode = move(newNode);
            newRawNode->prevNode = back;
            back = newRawNode;
        }

        size++;
    }

    void Pop()
    {
        if (size < 1)
        {
            cout << "-1\n";
        }
        else
        {
            cout << front->data << '\n';

            if (size == 1)
            {
                front = nullptr;
                back = nullptr;
            }
            else
            {
                front = move(front->nextNode);
                front->prevNode = nullptr;
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
        cout << (size == 0 ? '1' : '0') << '\n';
    }

    void Front()
    {
        if (size == 0)
        {
            cout << "-1\n";
        }
        else
        {
            cout << front->data << '\n';
        }
    }

    void Back()
    {
        if (size == 0)
        {
            cout << "-1\n";
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

    int n;
    cin >> n;

    auto q = make_unique<Queue>();

    while (n--)
    {
        string str;
        cin >> str;

        if (str == "push")
        {
            int x;
            cin >> x;

            q->Push(x);
        }
        else if (str == "pop")
        {
            q->Pop();
        }
        else if (str == "size")
        {
            q->Size();
        }
        else if (str == "empty")
        {
            q->Empty();
        }
        else if (str == "front")
        {
            q->Front();
        }
        else if (str == "back")
        {
            q->Back();
        }
    }

    return 0;
}
