#include <iostream>
using namespace std;

class Car {
private:
    int mileage = 0;

public:
    string brand, model;

    void drive(int distance);
    void show_data();
};

void Car::drive(int distance) {
    mileage = distance;
}

void Car::show_data() {
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Distance driven: " << mileage << " miles" << endl;
}

int main() {
    Car obj;
    obj.brand = "CD-70";
    obj.model = "SuperPower";
    obj.drive(50);
    obj.show_data();

    return 0;
}

