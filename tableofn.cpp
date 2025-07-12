#include<iostream>
using namespace std;
int main() {
    int i,n;
    cout << "Enter the number you want the table of - ";
    cin >> n;
//     for (i = n ; i <= n*10 ; i = i + n)
//         cout << i << endl; 
//     return 0;
// }
    for(i = 1 ; i <= 10; i++ ){
        cout << n * i << endl;
    }
}