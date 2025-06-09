#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

class LinkedList
{
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }
    void print()
    {
        if (head == NULL)
        {
            cout << "List is empty";
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                cout << temp->data << "->";
                temp = temp->next;
            }
        }
        cout << "\n";
    }

    // insert at begning------
    void insert_at_begin(int value)
    {
        Node *temp = new Node();
        temp->data = value;
        temp->next = head;
        head = temp;
    }
};

int main()
{
    // cout << "Hello World";

    LinkedList ll;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter " << i + 1 << " th value of linked list: ";
        int num;
        cin >> num;
        ll.insert_at_begin(num);
    }

    ll.print();

    return 0;
}