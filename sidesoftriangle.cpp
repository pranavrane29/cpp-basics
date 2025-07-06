#include<iostream>
using namespace std;
int main(){
    int a,b ,c;
    cout<<"Enter first side - ";
    cin>>a;
    cout<<"Enter Second side - ";
    cin>>b;
    cout<<"Enter Third side - ";
    cin>>c;

    if (a+b>c and b+c>a and a+c>b)
    {
        cout<<"All sides can be the sides of the triangle";
    }
    else
    cout<<"All dies cant be the sides of the triangle";
    
return 0;    
}