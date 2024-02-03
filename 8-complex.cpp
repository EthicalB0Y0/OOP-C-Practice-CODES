#include <iostream>
using namespace std;

class complex {
  float x, y;
public:
  void input();
  void display();
  friend complex sum(complex c1, complex c2);
};

void complex::input() {
  cout << "Enter the real part: ";
  cin >> x;
  cout << "Enter the imaginary part: ";
  cin >> y;
}

void complex::display() {
  cout << x << " + j" << y;
}

complex sum(complex c1, complex c2) {
  complex c3;
  c3.x = c1.x + c2.x;
  c3.y = c1.y + c2.y;
  return c3;
}

int main() {
  complex a, b, c;
  a.input();
  b.input();
  c = sum(a, b);
  cout << "a = ";
  a.display();
  cout << endl << "b = ";
  b.display();
  cout << endl << "c = ";
  c.display();
  return 0;
}

