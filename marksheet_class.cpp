#include<iostream>
using namespace std;

class student {
protected:
    int id;
    char name[50];

public:
    void input();
    void display();
};

void student::input() {
    cout << "\tEnter your name: ";
    cin >> name;
    cout << "\tEnter your id: ";
    cin >> id;
}

void student::display() {
    cout << "\n\tStudent name is: " << name << endl;
    cout << "\n\tStudent id is: " << id << endl;
}

class marks : public student {
protected:
    float c1, c2, c3, c4, c5;

public:
    void getdata();
    void disp();
};

void marks::getdata() {
    cout << "\tEnter your marks of sub1: ";
    cin >> c1;
    cout << "\tEnter your marks of sub2: ";
    cin >> c2;
    cout << "\tEnter your marks of sub3: ";
    cin >> c3;
    cout << "\tEnter your marks of sub4: ";
    cin >> c4;
    cout << "\tEnter your marks of sub5: ";
    cin >> c5;
}

void marks::disp() {
    cout << "\tStudent marks of 1st sub " << c1 << endl;
    cout << "\tStudent marks of 2nd sub " << c2 << endl;
    cout << "\tStudent marks of 3rd sub " << c3 << endl;
    cout << "\tStudent marks of 4th sub " << c4 << endl;
    cout << "\tStudent marks of 5th sub " << c5 << endl;
}

class test : public marks {
private:
    float total_marks;
    float per;

public:
    void getmarks();
};

void test::getmarks() {
    total_marks = c1 + c2 + c3 + c4 + c5;
    per = (total_marks / 500) * 100;
    display();
    disp();
    cout << "\n\tTotal marks is: " << total_marks << endl;
    cout << "\n\tPercentage is: " << per << endl;
    if (per >= 80) {
        cout << "\n\tGrade is A+" << endl;
    } else if (per >= 70) {
        cout << "\n\tGrade is A" << endl;
    } else if (per >= 60) {
        cout << "\n\tGrade is B" << endl;
    } else if (per >= 50) {
        cout << "\n\tGrade is C" << endl;
    } else {
        cout << "\n\tFail" << endl;
    }
}

int main() {
    test obj[2];
    for (int i = 0; i < 2; i++) {
        obj[i].getdata();
        obj[i].input();
    }
    for (int i = 0; i < 2; i++) {
        obj[i].getmarks();
    }
    return 0;
}

