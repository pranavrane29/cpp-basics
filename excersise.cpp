#include<iostream>
using namespace std;

class A{
    public:
    void fun();
};

void A::fun(){
    cout<<"fun() called"<<endl;
}

int main(){
    A a;
    a.fun();
    return 0;
}