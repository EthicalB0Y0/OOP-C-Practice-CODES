#include<iostream>
using namespace std;

class employee {
private:
  char name[30];
  float age;
public:
    employee() {  
        name[0] = 0;
        age = 0;
    }
  void getdata();
  void display();
};

void employee::getdata() {
  cout << "\n\tEnter name: ";
  cin >> name;
  cout << "\n\tEnter age: ";
  cin >> age;
}

void employee::display() {
  cout << "\n\tName: " << name << endl;
  cout << "\n\tAge: " << age << endl;
}

int main() {
  employee manager[3];
  
  for(int i = 0; i < 3; i++) {
    cout << "\n\tDetails of manager: " << i+1 << endl;
    manager[i].getdata();
  }
  
  cout << "\n";
  
  for(int i = 0; i < 3; i++) {
    cout << "\n\tManager " << i+1 << endl;
    manager[i].display();
  }
  
  return 0;
}

