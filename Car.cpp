#include "Car.h"

// no-argument default constructor  - with defaults added manually
Car::Car() : make("Toyota"), model("Corolla"), number_of_seats(4), engine_capacity(1.4) {}

// parameterized constructor
Car::Car(const std::string &make, const std::string &model, int numberOfSeats, double engineCapacity):
        make(make),
        model(model),
        number_of_seats(numberOfSeats),
        engine_capacity(engineCapacity) {}

// Getter & Setter Implementations
const std::string & Car::getMake() const {
    return make;
}

void Car::setMake(const std::string &make) {
    Car::make = make;
}

const std::string & Car::getModel() const {
    return model;
}

void Car::setModel(const std::string &model) {
    Car::model = model;
}

int Car::getNumberOfSeats() const {
    return number_of_seats;
}

void Car::setNumberOfSeats(int numberOfSeats) {
    number_of_seats = numberOfSeats;
}

double Car::getEngineCapacity() const {
    return engine_capacity;
}

void Car::setEngineCapacity(double engineCapacity) {
    engine_capacity = engineCapacity;
}

std::ostream &operator<<(std::ostream &os, const Car &car) {
    os << "make: " << car.make << " model: " << car.model
       << " number_of_seats: " << car.number_of_seats
       << " engine_capacity: " << car.engine_capacity;
    return os;
}

bool Car::operator<=(const Car &other) const {
    if( this->number_of_seats <= other.number_of_seats )
        return true;

    return false;
}


