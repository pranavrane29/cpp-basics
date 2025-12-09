#include <iostream>
using namespace std;    
class Grandparent {
   public:
   int a = 10;
    void show() {
        cout << "Grandparent class method called" << endl;
    }    
};

class Parent1 : virtual public Grandparent {
   public:
    void display() {
        cout << "Parent1 class method called" << endl;
    }    
};
class Parent2 : virtual public Grandparent {
   public:
    void print() {
        cout << "Parent2 class method called" << endl;
    }    
};

class child : public Parent1, public Parent2{
    public:
    void result(){
        cout<<"Child class method called"<<endl;
    }
};

int main(){
    child c1;
    c1.show();
    c1.display();   
    c1.print();
    c1.result();
}