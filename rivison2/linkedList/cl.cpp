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

class CL
{
public:
    Node *head;
    Node *tail;
    int sizeOfLL;
    CL()
    {
        head = NULL;
        tail = NULL;
        sizeOfLL = 0;
    }

    void print()
    {
        if (head == NULL && tail == NULL)
        {
            cout << "LL is empty." << endl;
            return;
        }
        // cout << tail->data;

        Node *temp = head;
        while (temp->next != head)

        {
            cout << "<- " << temp->data << " ->";
            temp = temp->next;
        }
        cout << "<- " << tail->data << " ->";
    }

    void insert_at_begin(int value)
    {
        if (head == NULL && tail == NULL)
        {
            Node *newNode = new Node();
            newNode->data = value;

            head = newNode;
            tail = newNode;
            sizeOfLL++;
            return;
        }

        Node *newNode = new Node();
        newNode->data = value;

        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        newNode->prev = tail;
        tail->next = newNode;
        sizeOfLL++;
    }
    void insert_at_end(int value)
    {
        if (head == NULL && tail == NULL)
        {
            insert_at_begin(value);
            return;
        }

        Node *newNode = new Node();
        newNode->data = value;

        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
        tail->next = head;
        head->prev = tail;
        sizeOfLL++;
    }
    void insert_at_position(int value, int position)
    {
        if (position == 1)
        {
            insert_at_begin(value);
            return;
        }

        if (position == sizeOfLL + 1)
        {
            insert_at_end(value);
            return;
        }

        if (
            (position <= 0) ||
            (position >= sizeOfLL + 2))
        {
            cout << "Invalid position value. you can give position value between 1 - " << sizeOfLL + 1 << ". as the size of LL is " << sizeOfLL << endl;
            return;
        }

        Node *temp = head;
        while ((position - 2) > 0 && (temp->next != head))
        {
            temp = temp->next;
            position--;
        }
        Node *newNode = new Node();
        newNode->data = value;

        newNode->prev = temp;
        newNode->next = temp->next;
        temp->next = newNode;
        sizeOfLL++;
    }

    void delete_from_begin()
    {
        if (head->next == head || head->next == NULL)
        {
            Node *t = head;
            head = NULL;
            tail = NULL;
            delete (t);
            return;
        }
        Node *temp = head;
        head = head->next;
        head->prev = tail;
        tail->next = head;
        delete (temp);
    }

    void delete_from_end() {}
    void delete_from_position() {}
};

int main()
{
    CL cicularLL;
    cicularLL.print();
    cicularLL.insert_at_begin(12);
    cicularLL.insert_at_begin(24);
    cicularLL.insert_at_begin(48);
    cicularLL.insert_at_end(222);
    cicularLL.insert_at_end(34);
    cicularLL.insert_at_position(121, 6);
    cicularLL.delete_from_begin();
    cicularLL.print();
    return 0;
}