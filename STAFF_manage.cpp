#include<iostream>
using namespace std;

class staff {
protected:
    int id;
    char name[50];

public:
    void input();
    void display();
};

    void staff::input() {
    cout << "\tEnter Your name: ";
    cin >> name;
    cout << "\tEnter your id: ";
    cin >> id;
}

     void staff::display() {
     cout << "\n\t*****NORMAL STAFF DATA***** "<< "\n";
     cout << "\tName: " << name << "\n\tID: " << id << "\n";
     cout << "\t***********************************\n";
}

class Teacher : public staff {
protected:
    char subject[50];
    char name[50];
public:
    void input_subject();
    void display();
};

    void Teacher::input_subject() { 
    cout << "\tEnter your name: ";
    cin >> name;
    cout << "\tEnter subject: ";
    cin >> subject;
}

    void Teacher::display() { 
    cout << "\n\t*****TEACHER DATA***** "<< "\n";
    cout <<"\tName of teacher is: " << name << "\n";
    cout << "\tSubject: " << subject << "\n";
    cout << "\t***********************************\n";
}

class Typist : public staff {
protected:
    int speed;
    char name[50];
public:
    void input_speed();
    void display();
};

    void Typist::input_speed() { 
    cout << "\tEnter the name of the typist: ";
    cin  >> name;
    cout << "\tEnter speed: ";
    cin >> speed;
}

void Typist::display() { 
    cout << "\n\t*****TYPIST DATA***** "<< "\n";
    cout << "\tTypist name is: " << name << "\n";
    cout << "\tSpeed: " << speed << " words per minute" << "\n";
     cout << "\t***********************************\n";
}

class Officer : public staff {
protected:
    char name[50];
    char grade[50];

public:
    void input_grade();
    void display();
};

    void Officer::input_grade() {
    cout << "\tEnter Officer name: ";
    cin >> name;
    cout << "\tEnter grade: ";
    cin >> grade;
}

     void Officer::display() {
     cout << "\n\t*****OFFICER DATA***** "<< "\n";
     cout << "\tOfficer name is: " << name << "\n";
     cout << "\tGrade: " << grade << "\n";
     cout << "\t***********************************\n";
}

int main() {
    int choice;

    do {
        cout << "\n \t*****ENTER STAFF MEMBER DATA******";
        cout << "\n\tSelect Staff Type:\n";
        cout << "\t1. Normal Staff\n";
        cout << "\t2. Teacher\n";
        cout << "\t3. Typist\n";
        cout << "\t4. Officer\n";
        cout << "\t5. Exit\n";
        cout << "\tEnter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1: {
                staff member;
                member.input();
                member.display();
                break;
            }
            case 2: {
                Teacher teacher;
                teacher.input_subject();
                teacher.display();
                break;
            }
            case 3: {
                Typist typist;
                typist.input_speed();
                typist.display();
                break;
            }
            case 4: {
                Officer classOfficer;
                classOfficer.input_grade();
                classOfficer.display();
                break;
            }
            case 5:
                cout << "Exiting program.....\n";
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 5.\n";
                break;
        }
    } while (choice != 5);

    return 0;
}







