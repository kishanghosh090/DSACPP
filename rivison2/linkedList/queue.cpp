#include <iostream>
using namespace std;

class Queue
{
    int Q[10];
    int front, rear;

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }

    void enQ(int val)
    {
        if (rear == 9)
        {
            cout << "Over Flow" << endl;
            return;
        }
        if (front == -1 && rear == -1)
        {
            front = rear = 0;
            Q[rear] = val;
        }
        else
        {
            rear++;
            Q[rear] = val;
        }
    }

    int deQ()
    {
        if (front == -1 && rear == -1)
        {
            cout << "Q is empty" << endl;
            return -1;
        }
        if (front == rear)
        {
            front = rear = -1;
            return -1;
        }
        return Q[front++];
    }
};

int main()
{
    return 0;
}