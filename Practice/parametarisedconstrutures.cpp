#include<iostream>
using namespace std;

class students
{
private:
    int  student_id;
    string student_name;
public:
    students(int id , string name){
       student_id = id;
       student_name = name;
    }
    void display(){
        cout << "Student ID and Name is -" <<endl;
        cout << student_id << endl ;
        cout << student_name << endl ;
    }
};

int main (){
    students student1(1,"Laadu");
    students student2(2,"Jadu");
    students student3(3,"Kaju");
    students student4(4,"Badam");
    students student5(5,"Pista");
    
    student1.display();
    student2.display();
    student3.display();
    student4.display();
    student5.display();

  return 0;
}