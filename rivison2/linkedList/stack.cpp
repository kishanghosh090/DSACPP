#include <iostream>
using namespace std;

// Stack class -----------------
class Stack
{
public:
    int stack[100];
    int topIndex;

    Stack()
    {
        topIndex = -1;
    }

    bool isempty()
    {
        return topIndex == -1;
    }

    void push(int val)
    {
        if (topIndex == 99)
        {
            cout << "Overflow ...";
            return;
        }

        topIndex++;
        stack[topIndex] = val;
    }

    int pop()
    {
        int val = stack[topIndex];
        topIndex--;
        return val;
    }

    int top()
    {
        if (topIndex == -1)
        {
            cout << "empty Stack";
            return -1;
        }
        return stack[topIndex];
    }
};

int main()
{
    Stack s1;
    s1.push(12);
    s1.push(24);
    s1.push(342);
    s1.push(34);
    s1.push(122);
    s1.push(2434);
    cout << s1.top() << endl;
    s1.pop();
    cout << s1.top() << endl;

    return 0;
}