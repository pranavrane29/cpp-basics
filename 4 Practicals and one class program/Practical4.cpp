#include<iostream>
using namespace std;

class teacher
{
private:
    int salary;
    char name[10];
    
public:
  void accept()
  {
      cout<<"Enter name and salary of teacher"<<endl;
      cin>>name>>salary;
  }

  void display()
  {
      cout<<"Name of teacher is: "<<name<<endl;
      cout<<"Salary of teacher is: "<<salary<<endl;
  }
};

int main()
{
    teacher t1;
    t1.accept();
    t1.display();
    return 0;
}