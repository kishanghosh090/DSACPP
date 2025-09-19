#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node()
    {
        prev = NULL;
        next = NULL;
    }
};

class DLinkedList
{
private:
    Node *head;

public:
    DLinkedList()
    {
        head = NULL;
    }
    void print()
    {
        if (head == NULL)
        {
            cout << "ouchhhh!! Your Linked List is empty";
            return;
        }

        Node *t = head;
        while (t->next != NULL)
        {
            cout << "<-> " << t->data << " <->";
            t = t->next;
        }
    }

    void insert_at_begin(int value)
    {
        if (head == NULL)
        {
            Node *t = new Node();
            t->data = value;
            head = t;
            return;
        }

        Node *t = new Node();

        t->data = value;
        head->prev = t;
        t->next = head;
        head = t;
    }
    void insert_at_end(int value) {}
    void insert_at_position(int value, int position) {}

    void delete_from_begin() {}
    void delete_from_end() {}
    void delete_from_position() {}
};

int main()
{
    DLinkedList dl1;
    dl1.insert_at_begin(10);
    dl1.insert_at_begin(20);
    dl1.insert_at_begin(30);
    dl1.insert_at_begin(40);
    dl1.print();

    return 0;
}