#include<iostream>
using namespace std;

class students{
    int roll_no;
    string name;

    public:
    students(){
        roll_no = 0;
        name = "Unknown";
        cout << "Constructor called";
    }
    void displaydata(){
        cout << "Default name and id for the Students is -"<<endl;
        cout << name << endl;
        cout << roll_no << endl;
    }
}s1;
    int main(){
        s1.displaydata();
    }