//Create an class named student;----- DONE
//Write a function inside the class and initialize it ; ---- DONE
//Define a function outside the class using scope resolution operator;------ DONE
//Create the objects in the main function ;---- DONE
//create dynamic object using new and delete keyword; --- DONE
#include<iostream>
using namespace std ;

class Students{
    int id;
    string name;

public :
    void displaydata();
    void getdata(){
        cout<< "Enter Your ID and NAME -"<< endl;
        cin>> id >> name ;
    }
    
};

    void Students::displaydata(){
        cout << "Your ID and NAME is as follows -" << endl;
        cout << id << " " << name << " ";

    }

int main (){
    Students student1 ;
    student1.getdata() ;
    student1.displaydata() ;

    Students* student2 = new Students ;
    student2 -> getdata();
    student2 -> displaydata();

    delete student2;

    return 0;
}