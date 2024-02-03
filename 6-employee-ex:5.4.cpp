#include<iostream>
using namespace std;

class employee {
private:
  char name[30];
  float age;
public:
  void getdata();
  void display();
};

void employee::getdata() {
  cout << "Enter name: ";
  cin >> name;
  cout << "Enter age: ";
  cin >> age;
}

void employee::display() {
  cout << "Name: " << name << endl;
  cout << "Age: " << age << endl;
}

int main() {
  employee manager[100];
  
  for(int i = 0; i < 3; i++) {
    cout << "Details of manager: " << i+1 << endl;
    manager[i].getdata();
  }
  
  cout << "\n";
  
  for(int i = 0; i < 3; i++) {
    cout << "Manager " << i+1 << endl;
    manager[i].display();
  }
  
  return 0;
}

