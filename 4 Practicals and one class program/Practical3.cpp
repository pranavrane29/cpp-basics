#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 6;
    float y = (float)a/b;

    cout << "Explicit casting (int to float): " << y << endl;
    int x=a;
    cout << "Implicit casting (float to int): " << x << endl;
    return 0;
}