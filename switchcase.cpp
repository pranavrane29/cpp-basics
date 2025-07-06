#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter first number ";
    cin >> num1;
    cout<<"Enter second number ";
    cin >> num2;
    char op;
    cout<<"Enter your choice as +,-,* or / ";
    cin >> op;
    switch(op){
        case '+' :
            cout << num1 + num2 ;
            break;
        
        case '-' :
            cout << num1 - num2 ;
            break;
        
        case '*' :
            cout << num1 * num2 ;
              break;
        case '/' :
            cout << num1 / num2 ;
            break;
    }
    
    return 0;

}