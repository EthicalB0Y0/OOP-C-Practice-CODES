#include<iostream>
using namespace std;

class largest {
private:
    int m;
    int n;

public:
    void check();
    void input(int m, int n);
    void disp();
};

void largest::check() {
    if (m >= n)
        cout << m;
    else
        cout << n;
}

void largest::input(int a, int b) {
    m = a;
    n = b;
}

void largest::disp() {
    cout << "Your largest value is: ";
    check();
    cout << endl; 
}

int main() {
    largest a;
    a.input(12,45);
    a.disp();
    return 0;
}

