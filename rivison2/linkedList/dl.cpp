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

public:
    Node *head;
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
        while (t != NULL)
        {
            // cout << "<-> " << t->prev << " " << t->data << " " << t->next << " <->";
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
    void insert_at_end(int value)
    {
        if (head == NULL)
        {
            insert_at_begin(value);
            return;
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        Node *newNode = new Node();
        newNode->data = value;
        newNode->prev = temp;
        temp->next = newNode;
    }
    void insert_at_position(int value, int position) {}

    void delete_from_begin()
    {
        if (head == NULL)
        {
            cout << "Linked List is empty";
            return;
        }

        Node *t = head;
        head = head->next;
        head->prev = NULL;
        delete (t);
    }
    void delete_from_end()
    {
    }
    void delete_from_position() {}
};

int main()
{
    DLinkedList dl1;
    dl1.insert_at_begin(10);
    dl1.insert_at_begin(20);
    dl1.insert_at_begin(30);
    dl1.insert_at_begin(40);
    dl1.delete_from_begin();
    dl1.delete_from_begin();
    dl1.delete_from_begin();

    dl1.print();

    return 0;
}