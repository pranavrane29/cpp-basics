#include<iostream>
using namespace std;
int main(){
    //Method 1: Using a for loop with modulus operator
//     int i ;
//     for (i = 19 ; i <= 190; i++)
//     {
//         if (i % 19 ==0)
//         cout << i<<"\t";
//     }
//     return 0;
// }

    //Method 2: Using a for loop with increment

    int i;
    for (i = 19 ; i <= 190; i = i + 19)
    {
        cout << i << "\t";
    }
    return 0;
}   