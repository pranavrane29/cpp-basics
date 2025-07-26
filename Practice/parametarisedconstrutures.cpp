#include<iostream>
using namespace std;

class students
{
private:
    int  student_id;
    string student_name;
public:
    students(int id , string name){
        id = student_id;
        name = student_name;
    }
    void display(){
        cout << "Student ID and Name is -" <<endl;
        cout << id << endl ;
        cout << name << endl ;
    }
};

students::students(/* args */)
{
}

students::~students()
{
}
