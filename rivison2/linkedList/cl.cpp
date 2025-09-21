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

        Node *temp = head;
        while (temp->next != NULL)
        {
            cout << "<- " << temp->data << " ->" << endl;
            temp = temp->next;
        }
    }

    void insert_at_begin(int value)
    {
        if (head == NULL && tail == NULL)
        {
            Node *newNode = new Node();
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
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
        tail->next = head;
        head->prev = tail;
        sizeOfLL++;
    }
    void insert_at_position(int value, int position)
    {
        if (
            (position <= 0) &&
            (position > sizeOfLL + 1))
        {
            cout << "Invalid position value. you can give position value between 1 - " << sizeOfLL + 1 << ". as the size of LL is " << sizeOfLL << endl;
            return;
        }

        Node *temp = head;
        while ((position - 2) > 0 && (temp->next != NULL))
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
};

int main()
{
    CL cicularLL;
    cicularLL.print();
    return 0;
}