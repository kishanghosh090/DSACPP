#include <iostream>
using namespace std;

// create Node------
class Node
{

public:
    int data;
    Node *prev;
    Node *next;
    Node()
    {
        prev = NULL;
        next = next;
    }
};

// create Doubly Linked List-----

class Dll
{
    Node *head = NULL;

public:
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
                if (temp->next == NULL)
                {
                    cout << temp->data << "->";
                }
            }
        }
        cout << "\n";
    }
    void insert_at_end(int value)
    {
        Node *temp = new Node();
        temp->data = value;
        Node *t = head;

        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            while (t->next != NULL)
            {
                t = t->next;
            }
            t->next = temp;
            temp->prev = t;
        }
    }

    // insert at begining----

    void insert_at_begin(int value)
    {
        Node *temp = new Node();

        temp->data = value;

        if (head == NULL)
        {
            head = temp;
        }

        temp->next = head;

        head->prev = temp;
        head = temp;
    }
};
int main()
{

    Dll dll;

    dll.insert_at_end(19);
    dll.insert_at_end(20);
    dll.insert_at_end(22);
    dll.insert_at_end(24);
    dll.insert_at_end(25);
    dll.insert_at_begin(100);
    dll.insert_at_begin(1007);
    dll.print();

    return 0;
}