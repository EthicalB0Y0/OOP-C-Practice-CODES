#include<iostream>
using namespace std;

class time {
  int hours;
  int minutes;
public:
  void gettime();
  void display();
  void sum(time t1, time t2);
}
T1,T2,T3; /* mera compiler me issue tha islia yaha initialize kia han app necha wala comment out krdo isko comment kardo :) */

void time::gettime() {
 cout << "Enter minutes: ";
 cin >> minutes;
 cout << "Enter hours: ";
 cin >> hours;
}

void time::display() {
  cout << hours << " hours and ";
  cout << minutes << " minutes " << endl;
}

void time::sum(time t1, time t2) {
  minutes = t1.minutes + t2.minutes;
  hours = t1.hours + t2.hours + (minutes / 60);
  minutes = minutes % 60;
}

int main() {
 // time T1, T2, T3; is ka comment remove kardo :)   
  T1.gettime();
  T2.gettime();
  T3.sum(T1, T2);

  cout << "T1 = ";
  T1.display();
  cout << "T2 = ";
  T2.display();
  cout << "T3 = ";
  T3.display();

  return 0;
}

