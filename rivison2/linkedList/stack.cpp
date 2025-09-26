#include <iostream>
using namespace std;

// Stack class -----------------
class Stack
{
    int stack[100];
    int top;
    Stack()
    {
        top = -1;
    }

    bool isempty()
    {
        return top == -1;
    }

    void push(int val)
    {
        if (top == 99)
        {
            cout << "Overflow ...";
            return;
        }

        top++;
        stack[top] = val;
    }

    int pop()
    {
        int val = stack[top];
        top--;
        return val;
    }

    int top()
    {
        if (top == -1)
        {
            cout << "empty Stack";
            return -1;
        }
        return stack[top];
    }
};

int main()
{

    return 0;
}