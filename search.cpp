#include <iostream>
using namespace std;

class Array {
protected:
    int numbers[5];

public:
    void input();
    void display();
    void search(); 
};

void Array::input() {
    cout << "\n\tENTER FIVE VALUES OF ARRAY\n";
    for (int i = 0; i < 5; i++) {
    cout << "\t";
        cin >> numbers[i];
    }
}

void Array::search() {
    int a = 0;
    int search;
    cout << "\n\tEnter the number you want to search: ";
    cin >> search;
    for (int i = 0; i < 5; i++) {
        if (search == numbers[i]) {
            cout << "\n\tYour number is present at Index " << i << " and its value is: " << numbers[i] << "\n";
            a = 1;
            break;
        }
    }
    if (a == 0) {
        cout << "Your number is not present in the array.\n";
    }
}


void Array::display() {
    cout << "\n\tYour values of the array are:" << "\n";
    for (int i = 0; i < 5; i++) {
        cout << "\t" << numbers[i] << "\n";
    }
}

int main() {
    Array obj;

    obj.input();
    obj.display();

    obj.search(); 

    return 0;
}

