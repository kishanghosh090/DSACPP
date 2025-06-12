#include <iostream>
using namespace std;

class Stack
{
private:
    int stack[100];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    // push data into stack
    void push(int value)
    {
        if (top > 99)
        {
            cout << "Stack overflow";
        }
        else
        {
            top++;
            stack[top] = value;
        }
    }

    // pop data from stack
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is empty";
        }
        else
        {
            top--;
        }
    }

    // extract the top data
    int peek();
};

int Stack::peek()
{

    if (top == -1)
    {
        cout << "stack is empty";
    }
    else
    {
        return stack[top];
    }
}

int main()
{
    Stack stack;
    stack.push(12);
    stack.push(124);
    stack.push(1434);
    stack.push(124);
    stack.pop();
    cout << stack.peek();
    cout << "\n";
}