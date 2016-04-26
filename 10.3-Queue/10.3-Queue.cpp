#include <iostream>

using namespace std;

struct Node{
    string val;
    Node *prev;
    Node *next;
    Node()
    {
        next = nullptr;
        prev = nullptr;
        val = "";
    }
    Node(string v)
    {
        next = nullptr;
        prev = nullptr;
        val = v;
    }
};

class Queue{
public:
    Queue();
    void enqueue(string val);
    string dequeue();
    void print();
private:
    Node *head;
    Node *tail;
};

Queue::Queue()
{
    head = nullptr;
    tail = nullptr;
}

void Queue::enqueue(string val)
{
        if (head == nullptr && tail == nullptr)
        { // in this case, the queue was empty
            head = new Node(val);
            tail = head;
        }
        else
        { // in this case, we already have stuff in the queue
            Node *oldHead = head;
            head = new Node(val);
            head->next = oldHead;
            oldHead->prev = head;
        }
}

void Queue::print()
{
    cout << "======= Queue =======\n";

    if (head == nullptr)
    {
        cout << "The queue is empty.\n";
        return;
    }
    else
    {
        Node *current = head; // start looking at the head

        while (current != nullptr)
        {
            cout << current->val << endl;
            current = current->next; // move to next node
        }
    }
    cout << "=====================\n";
}

string Queue::dequeue()
{
    string temp = "";
    if (head == nullptr)
    {
        cout << "The queue is empty\n";
    }
    else if (head == tail)
    { // only one thing in the queue
        temp = head->val;

        head = nullptr;
        tail = nullptr;
    }
    else
    {
        temp = tail->val;

        tail = tail->prev;
        tail->next = nullptr;
    }
    return temp;
}

int main()
{
    Queue groceryLine;
    groceryLine.enqueue("Bob");
    groceryLine.enqueue("Alice");
    groceryLine.enqueue("Tim");
    groceryLine.enqueue("Nancy");
    groceryLine.print();
    cout << groceryLine.dequeue() << " has left the line\n";
    groceryLine.print();

    return 0;
}
