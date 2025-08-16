#include <iostream>

class A {
private:
    int a, b;
    float c;

public:
    // Default constructor
    A() {
        std::cout << "Enter two nos-";
        std::cin >> a >> b;
        std::cout << a << " " << b << std::endl;
    }

    // Parameterized constructor (Constructor Overloading)
    A(int x, float y) {
        a = x;
        c = y;
        std::cout << a << " " << c << std::endl;
    }
    A()
};

int main() {
    A obj1;             // Calls the default constructor
    A obj2(100, 200);   // Calls the parameterized constructor A(int, float)
    A obj3(10, 20.30); // Calls the parameterized constructor A(int, float)

    // The 'get' function mentioned in the image is not defined in the class.
    // Assuming it's a placeholder or a separate function not related to the class.
    // get; // This line would cause a compilation error as 'get' is not a defined function or object.

    return 0;
}