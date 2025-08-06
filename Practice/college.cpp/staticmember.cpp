#include<iostream>
using namespace std;

class test {
    private:
    static int count;
    int num;

    public:
    void getdata(int a){
        num = a ; //REQUIRED A INSTEAD OF N
        count++;
    }
    static void putdata(){
        cout << "Count ="<<count;
    }
};

int test :: count;
int main(){  //SHOULD ALWAYS BE INT MAIN INSTEAD OF VOID MAIN 
    test t1,t2;
    test ::putdata();
    test ::putdata();

    t1.getdata(100);
    t2.getdata(200);
    test ::putdata();
    test ::putdata();
}