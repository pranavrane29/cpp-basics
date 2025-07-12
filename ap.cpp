/*Enter an AP program to print ap - 4 , 7, 10 , 13 ,16 ....... till nth term*/

#include<iostream>
using namespace std;
int main (){
    int i, a, n;
    a = 4;
    cout<<"Enter an number till with you want the ap of the given series - ";
    cin >> n;

    for ( i = 1 ; i <= n; i++)
    {
        cout<<a<<endl;
        a = a + 3;
    }
    
    return 0;
}