#include<iostream>
using namespace std;

class Complex {
    float x, y;

public:
    void input();
    void display();
    friend Complex sum(Complex c1, Complex c2);
};

void Complex::input() {
    cout << "Enter the real number: ";
    cin >> x;
    cout << "Enter the imaginary number: ";
    cin >> y;
}

Complex sum(Complex c1, Complex c2) {
    Complex c3;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;
    return c3;
}

void Complex::display() {
    cout << x << "+j" << y;
}

int main() {
    Complex a, b, c;
    
    a.input();
    b.input();
    c = sum(a, b);
    
    cout << "Complex number a: ";
    a.display();
    cout << endl;
    
    cout << "Complex number b: ";
    b.display();
    cout << endl;
    
    cout << "Sum of complex numbers a and b: ";
    c.display();
    
    return 0;
}

