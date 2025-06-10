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
                if (temp->next == NULL)
                {
                    cout << temp->data << "->";
                }
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

    // insert at end

    void insert_at_end(int value)
    {
        Node *temp = new Node();
        temp->data = value;

        if (head == NULL)
        {
            head = temp;
            return;
        }
        else
        {
            Node *t = head;
            while (t->next != NULL)
            {

                t = t->next;
            }
            t->next = temp;
        }
    }

    // insert at any position

    void insert_at_postion(int value, int position)
    {
        if (position < 0)
        {
            cout << "Position is not valid";
        }

        Node *temp = new Node();
        temp->data = value;

        if (position == 1)
        {
            temp->next = head;
            head = temp;
        }
        else
        {
            Node *t = head;
            while (position - 2 != 0)
            {
                t = t->next;
                position--;
            }
            temp->next = t->next;
            t->next = temp;
        }
    }

    // delete from begining

    void delete_from_begin()
    {
        if (head == NULL)
        {
            cout << "Linked List is empty";
        }
        else
        {

            Node *temp = head;
            head = head->next;
            delete (temp);
        }
    }
    // delete form end

    void delete_from_end()
    {
        if (head == NULL)
        {
            cout << "Linked List is empty";
        }
        else
        {
            Node *temp = head;

            while (temp->next->next != NULL)
            {
                temp = temp->next;
            }
            delete (temp->next);
            temp->next = NULL;
        }
    }

    // delete from any position

    void delete_from_position(int position)
    {
        if (position < 0)
        {
            cout << "Position is not valid";
        }

        if (head == NULL)
        {
            cout << "Linked List is empty";
        }
        else if (position == 1)
        {
            Node *temp = head;
            head = head->next;
            delete (temp);
        }
        else
        {
            Node *temp = head;

            while (position - 2 != 0 && temp->next != NULL)
            {
                temp = temp->next;
                position--;
            }
            Node *t = temp->next;
            temp->next = t->next;
            delete (t);
        }
    }
};

int main()
{
    // cout << "Hello World";

    LinkedList ll;

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "Enter " << i + 1 << " th value of linked list: ";
    //     int num;
    //     cin >> num;
    //     ll.insert_at_begin(num);
    // }
    ll.insert_at_begin(12);
    ll.insert_at_begin(18);
    ll.insert_at_begin(16);
    ll.insert_at_end(100);
    // ll.insert_at_end(100);
    ll.insert_at_postion(54, 4);
    ll.insert_at_begin(16000);
    // ll.delete_from_begin();
    ll.delete_from_position(2);
    ll.print();

    return 0;
}