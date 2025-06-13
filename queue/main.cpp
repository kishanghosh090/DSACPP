#include <iostream>
using namespace std;

class Queue
{
private:
    int queue[10];
    int front;
    int rear;

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }

    void enqueue(int value)
    {
        if (rear == 9)
        {
            cout << "Queue overflow";
        }
        else
        {
            if (front == -1 && rear == -1)
            {
                front = 0;
                rear = 0;
                queue[rear] = value;
            }
            else
            {
                rear++;
                queue[rear] = value;
            }
        }
    }

    void dequeue()
    {
        if (rear == -1)
        {
            cout << "Queue underflow";
        }
        else
        {
            if (front == rear)
            {
                front = -1;
                rear = -1;
            }
            else
            {
                front++;
            }
        }
    }
};

int main()
{

    Queue q1;
    return 0;
}