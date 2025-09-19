#include <iostream>
#include <stdio.h>
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
    int sizeOfLinkedList;
    LinkedList()
    {
        this->head = NULL;
        sizeOfLinkedList = 0;
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
        sizeOfLinkedList++;
    }

    // insert at end----------------------
    void insert_at_end(int value)
    {
        if (head == NULL)
        {
            insert_at_begin(value);
        }

        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            Node *newNode = new Node();
            newNode->data = value;
            temp->next = newNode;
            sizeOfLinkedList++;
        }
    }

    // insert at any position-------------
    void insert_at_position(int position, int value)
    {
        if (head == NULL)
        {
            insert_at_begin(value);
            return;
        }
        if (position > sizeOfLinkedList - 1)
        {
            cout << "ouhhhchhh!!" << " size of linked list is " << sizeOfLinkedList << ". " << "you can insert data max " << sizeOfLinkedList + 1 << " th position...\n";
            return;
        }

        if (position <= 0)
        {
            cout << "Position " << position << " is invalid" << endl;
        }
        Node *temp = head;

        while ((position - 2) > 0 && temp->next != NULL)
        {
            temp = temp->next;
            position--;
        }
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = temp->next;
        temp->next = newNode;
        sizeOfLinkedList++;
    }

    // delete from begin------------------
    void delete_from_begin()
    {
        if (head == NULL)
        {
            cout << "ouchhh!! There are nooo linked list.";
            return;
        }
        if (head->next == NULL)
        {
            Node *temp = head;
            head = NULL;
            delete (temp);
            sizeOfLinkedList--;
            return;
        }

        Node *temp = head;
        head = temp->next;
        delete (temp);
        sizeOfLinkedList--;
    }

    // void delete from end---------------
    void delete_from_end()
    {
        if (head == NULL)
        {
            cout << "ouuchhhh!!!...Linked list is empty";
        }

        else if (head->next == NULL)
        {
            Node *temp = head;
            head = NULL;
            delete (temp);
            sizeOfLinkedList--;
        }
        else
        {
            Node *temp = head;
            while (temp->next->next != NULL)
            {
                temp = temp->next;
            }
            Node *t = temp->next;
            temp->next = NULL;
            delete (t);
            sizeOfLinkedList--;
        }
    }
    // delete from position---------------
    void delete_from_position(int position)
    {

        if (head == NULL)
        {
            cout << "Linked List is empty";
            return;
        }

        if (position > sizeOfLinkedList)
        {
            cout << "Position which is given by you exided the size of linked list";
            return;
        }
        if (position <= 0)
        {
            cout << "position which is given by you is invalid";
            return;
        }
        if (position == 1)
        {
            delete_from_begin();
            return;
        }

        Node *temp = head;
        while ((position - 2) > 0 && (temp->next != NULL))
        {
            temp = temp->next;
            position--;
        }
        Node *t = temp->next;
        temp->next = temp->next->next;
        delete (t);
        sizeOfLinkedList--;
    }
};

int main()
{
    LinkedList ll1;

    ll1.print();
    ll1.insert_at_begin(12);
    ll1.insert_at_begin(24);
    ll1.insert_at_begin(54);
    ll1.insert_at_end(10000);
    ll1.insert_at_position(3, 76);
    // ll1.delete_from_end();
    // ll1.delete_from_begin();
    // ll1.delete_from_begin();
    // ll1.delete_from_begin();
    ll1.delete_from_position(3);
    ll1.delete_from_position(1);
    ll1.print();
    return 0;
}