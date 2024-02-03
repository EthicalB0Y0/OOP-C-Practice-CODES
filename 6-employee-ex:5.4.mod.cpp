#include<iostream>
using namespace std;

class employee {
private:
  string name;
  int  age;
public:
  void getdata(const char* a, int b);
  void display();
};

void employee::getdata(const char* a, int b) {
 name = a;
 age = b;
}

void employee::display() {
  cout << "Name: " << name << endl;
  cout << "Age: " << age << endl;
}

int main() {
  employee manager[100];
  manager[0].getdata("saqib",19);
  manager[1].getdata("haris",21);
  manager[2].getdata("osama",25);
 
  cout << "\n";
  
  for(int i = 0; i < 3; i++) {
    cout << "Manager " << i+1 << endl;
    manager[i].display();
  }
  
  return 0;
}

