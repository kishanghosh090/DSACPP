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
    void insert_at_position(int value, int position)
    {
        Node *t = head;

        while ((position - 2) > 0 && (t->next != NULL))
        {
            t = t->next;
            position--;
        }

        Node *newNode = new Node();
        newNode->prev = t;
        newNode->next = t->next;
        t->next = newNode;

        if (t->next != NULL)
        {
            t->next->prev = newNode;
        }
    }

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
        if (head->next == NULL)
        {
            delete_from_begin();
            return;
        }
        Node *t = head;
        while (t->next != NULL)
        {
            t = t->next;
        }

        t->prev->next = NULL;
        delete (t);
    }
    void delete_from_position(int position)
    {
        Node *t = head;

        while ((position - 2) > 0 && (t->next != NULL))
        {
            t = t->next;
            position--;
        }

        Node *temp = t->next;
        t->next = t->next->next;
        t->next->next->prev = t;
        delete (temp);
    }
};

int main()
{
    DLinkedList dl1;
    dl1.insert_at_begin(10);
    dl1.insert_at_begin(20);
    dl1.insert_at_begin(30);
    dl1.insert_at_begin(40);
    // dl1.delete_from_begin();
    // dl1.delete_from_begin();
    // dl1.delete_from_begin();
    dl1.delete_from_position(2);

    dl1.print();

    return 0;
}