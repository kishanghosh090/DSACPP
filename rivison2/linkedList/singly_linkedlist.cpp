#include <iostream>
using namespace std;

// create node for LL ------------------
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->next = NULL;
    }
};

// create LL ----------------------------
class LinkedList
{

public:
    Node *head;
    LinkedList()
    {
        this->head = NULL;
    }

    // print linked list------------------
    void print()
    {
        if (head == NULL)
        {
            cout << "Ouhhh!! Linked List is empty..." << endl;
        }
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
    }

    // insert at begin--------------------
    void insert_at_begin(int value)
    {
        Node *temp = new Node();
        temp->next = head;
        temp->data = value;
        head = temp;
    }

    // insert at end----------------------
    void insert_at_end(int value)
    {
        if (head == NULL)
        {
            insert_at_begin(value);
        }
        // else if (head->next == NULL)
        // {
        //     // Node *temp = head;
        //     // head = NULL;
        //     // delete (temp);
        // }
        else
        {
            // Node *temp = head;
            // while (temp->next->next != NULL)
            // {
            //     temp = temp->next;
            // }
            // Node *t = temp->next;
            // temp->next = NULL;
            // delete (t);

            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            Node *newNode = new Node();
            newNode->data = value;
            temp->next = newNode;
        }
    }

    // insert at any position-------------
    void insert_at_position(int position, int value)
    {
        if (head = NULL)
        {
            insert_at_begin(value);
            return;
        }
    }

    // delete from begin------------------
    void delete_from_begin() {}

    // void delete from end---------------
    void delete_from_end() {}

    // delete from position---------------
    void delete_from_position() {}
};

int main()
{
    LinkedList ll1;
    ll1.print();
    ll1.insert_at_begin(12);
    ll1.insert_at_begin(24);
    ll1.insert_at_begin(54);
    ll1.insert_at_end(10000);
    ll1.print();
    return 0;
}