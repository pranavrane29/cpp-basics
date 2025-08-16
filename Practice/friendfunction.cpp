#include <iostream>
using namespace std;

class Box{
    int length; // private

public:
      // ...existing code...
    Box(int length) {
        this->length = length;
    }

    // Friend function declaration
    friend void showLength(Box b);
};
// Friend function definition (outside the class)
void showLength(Box b) {
    cout << "Length: " << b.length << endl;
}
int main() {
    Box b1(10);
    showLength(b1); // friend function can access private member
    return 0;
}