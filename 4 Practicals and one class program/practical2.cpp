#include <iostream>
#include <iomanip>

using namespace std;

class Demo {
    int value;
public:
    Demo(int v) : value(v) {}
    void show() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    // Memory management operator: new and delete
    Demo *ptr = new Demo(42);

    // Scope resolution operator
    ::std::cout << std::setw(15) << std::setfill('-') << "Output" << std::endl;
    ptr->show();

    // Manipulator: setw, setfill, endl
    cout << setw(10) << setfill('*') << 123 << endl;

    delete ptr; // Free memory

    return 0;
}