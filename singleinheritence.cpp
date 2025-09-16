#include<iostream>
using namespace std;

class number{
    protected:
    int n;
    public:
    void accept(){
        cout<<"Enter a number: ";
        cin>>n;
    }
};

class check:public number{
    public:
    void oddeven(){
        if(n % 2==0){
            cout<<"Even number";
        }
        else{
            cout<<"Odd number";
        }
    }
};

int main(){
    check c1;
    c1.accept();
    c1.oddeven();
    return 0;
}
