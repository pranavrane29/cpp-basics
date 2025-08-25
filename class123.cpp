#include<iostream>
using namespace std;
class student{
    int roll;
    char name[20];
    float marks;

    public :
    void getdata(){
        cout<<"Enter roll number: ";
        cin>>roll;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter marks: ";
        cin>>marks;
    }
    void display(){
        cout<<"Roll Number: "<<roll<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};

int main(){
    student s;
    s.getdata();
    s.display();
    return 0;
}