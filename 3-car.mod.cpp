#include <iostream>
using namespace std;

class Car {
private:
    int mileage = 0;

public:
    string brand, model;

    void drive();
    void show_data();
};

void Car::drive() {
    cout << "Enter how many km car have been driven: ";
    cin >> mileage;
}

void Car::show_data() {
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Distance driven: " << mileage << " miles" << endl;
}

int main() {
    Car obj;
    cout << "Enter your brand: ";
    cin >> obj.brand;
    cout << "Enter your model: ";
    cin >> obj.model;

    obj.drive();
    obj.show_data();

    return 0;
}

