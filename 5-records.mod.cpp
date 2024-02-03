#include <iostream>
#include <string>
using namespace std;

class student {
public:
    int id;
    string name;

    void getdata(int a, const char* b);
    void display();
};

void student::getdata(int a, const char* b) {
    id = a;
    name = b;
}

void student::display() {
    cout << "\t name : " << name << "\n";
    cout << "\t id : " << id << "\n";
}

int main() {
    student s[100];
    s[0].getdata(56, "xyz");
    s[1].getdata(65, "abc");
    s[2].getdata(45, "saqib");

    cout << "\t ***Stored Record***" << "\n";

    for(int i = 0; i < 3; i++) {
        s[i].display();
    }

    return 0;
}

