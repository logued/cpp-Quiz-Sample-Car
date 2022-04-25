#ifndef QUIZ_SAMPLE_CAR_CAR_H
#define QUIZ_SAMPLE_CAR_CAR_H

#include<string>
#include <ostream>

class Car {

private:
    std::string make;   // use std:: in header files instead of "using namespace std"
    std::string model;
    int number_of_seats;
    double engine_capacity;

public:

    Car();

    Car(const std::string &make, const std::string &model, int numberOfSeats, double engineCapacity);

    // Code > Generate > Getter & Setter to autogenerate getters and setters
    const std::string &getMake() const ;

    void setMake(const std::string &make) ;

    const std::string &getModel() const ;

    void setModel(const std::string &model) ;

    int getNumberOfSeats() const ;

    void setNumberOfSeats(int numberOfSeats) ;

    double getEngineCapacity() const ;

    void setEngineCapacity(double engineCapacity) ;

    friend std::ostream &operator<<(std::ostream &os, const Car &car);

    bool operator<(const Car &rhs) const;

    bool operator>(const Car &rhs) const;

    bool operator<=(const Car &rhs) const;

    bool operator>=(const Car &rhs) const;

};

#endif //QUIZ_SAMPLE_CAR_CAR_H
