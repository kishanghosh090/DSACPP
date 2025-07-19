// #include<iostream>
// #include<stack>
// using namespace std;


// int main(){
//     stack<int> s;
//     int arr[] = {1,2,3,1};
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     s.push(1);

//     int i = 0;
//     bool isPal = true;
//     while (!s.empty())
//     {
//         if (s.top() != arr[i])
//         {
//             isPal = false;
//             break;
//         }
//         s.pop();
//         i++;
        
//     }

//     cout << "is Palindrome: " << isPal;
    
    
// }

#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<char> s;

    s.push('a');
    s.push('z');
    s.push('Z');
    s.push('A');


    while (!s.empty())
    {
        int a = s.top();
        cout << a << " ";
        s.pop();
    }
}