#include <iostream>
#include "Car.h"
using namespace std;

int main() {
    cout << "Quiz 3 Sample Code" << std::endl;

    Car car1;  // create Car object with default constructor invoked

    cout << car1 << endl;

    Car car2("Toyota","Camery",5,2.0);
    cout << car2 << endl;

    cout << "Compare cars by number of seats" << endl;
    cout << ((car1<=car2) ? "car1 is <= car2" : "car1 is > car2" )<< endl;

    return 0;
}
