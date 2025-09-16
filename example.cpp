#include<iostream>
using namespace std;        
class example {
private: 
int rollno;  
char name[20];
public:
void getdata() { 
    cout << "Enter name and rollno\n";
    cin >> name >> rollno;  
}
void putdata() { 
    cout << "Name and rollno is " << name << " " << rollno; 
}
};  

int main()
{ 
    example e1; 
    e1.getdata(); 
    e1.putdata(); 
}   
