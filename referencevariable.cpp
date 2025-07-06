#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int &b = a;   // b is a reference to a

    b = 10;

    cout << "a = " << a << endl;  // Output: a = 10
    cout << "b = " << b << endl;  // Output: b = 10

    return 0;
}
