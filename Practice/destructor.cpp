#include<iostream>
using namespace std;

int count = 0;

class Students{
    public:
    Students(){
        count++;
        cout << "\nObject Created - " << count;
    }

    ~Students(){
        count--;
        cout << "\nObject Destroyed - " << count;
    }
};

int main (){
    Students s1 , s2 , s3;
   {
    Students s4;
   }
   return 0; 
}
