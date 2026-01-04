// #include <iostream>
// using namespace std;

// template <typename T>
// T add(T a, T b) {
//     return a + b;
// }

// int main() {
//     cout << add(2, 3) << endl;
//     cout << add(2.5, 3.5) << endl;
//     cout << add(string("Hello, "), string("World!")) << endl;
//     return 0;
// }


// class templates

#include <iostream>
using namespace std;

template <typename T>
class Box {
    T value;
public:
    Box(T v) {
        value = v;
    }

    void show() {
        cout << value << endl;
    }
};

int main() {
    Box<int> b1(10);
    Box<double> b2(3.14);

    b1.show();
    b2.show();
}
