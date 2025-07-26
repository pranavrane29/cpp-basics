#include<iostream>
using namespace std;

class students{
    int roll_no;
    string name;

    public:
    students(){
        roll_no = 0;
        name = "Unknown";
        cout << "Constructor called"<<endl;
    }
    void displaydata(){
        cout << "Default name and id for the Students is -"<<endl;
        cout << name << endl;
        cout << roll_no << endl;
    }
};
    int main(){
        students s1;
        s1.displaydata();
    return 0;
    }