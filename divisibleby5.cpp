#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter any number -";
    cin>>x;

    if (x%5 == 0)
    {
        cout<<"The number is divisible by 5";
    }
    else
    {
        cout<<"The number is not divisble by 5";
    }
    
    return 0;
}