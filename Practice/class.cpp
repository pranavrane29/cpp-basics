#include<iostream>
using namespace std;

class Students{
    private:
        int id;
        string name;

    public:
        int getdata(){
           cout << "Enter Your id and name"<< endl;
           cin >> id >> name;

       }

       int displaydata(){
            cout << "Student id and his Name is -"<< id << endl << name;
       }
    
};

    int main(){
        Students s1,s2,s3;

        s1.getdata();
        s2.getdata();
        s3.getdata(); 

        s1.displaydata();
        s2.displaydata();
        s3.displaydata();

    return 0;
    }