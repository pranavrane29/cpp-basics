#include<iostream>
using namespace std;
class cars{
    string make;
    int model_no;
    int year;

    public:
    //Parameterized constructor
    cars(string car_make , int model_id, int make_year ){
        make = car_make;
        model_no = model_id;
        year = make_year;
    }
    // Copy constructor
    cars(const cars &car){
        make = car.make;
        model_no = car.model_no;
        year = car.year;
    }

    void display(){
        cout << "Car Make: " << make << ", Model No: " << model_no << ", Year: " << year << endl;
    }
};

int main(){
    cars car1("Lamborgini Aventador",145,2023);
    cars car2 = car1;
    cout << "Original Car -"<<endl;
    
    car1.display();

    cout << "Copied Car -"<<endl;
    car2.display();

return 0;
}