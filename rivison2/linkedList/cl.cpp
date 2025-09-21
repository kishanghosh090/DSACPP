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
};

int main()
{
    CL cicularLL;
    cicularLL.print();
    return 0;
}