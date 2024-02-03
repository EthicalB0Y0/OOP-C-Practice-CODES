#include<iostream>
using namespace std;

class student {
int id;
char name [50];
public:
void getdata();
void display();
};
	void student :: getdata() {
	cout << "Enter record number :  ";
	cin >> id;
	cout << "Enter name : ";
	cin >> name;
	}
		void student :: display() {
		
		cout << "\t name : " << name << "\n";
		cout << "\t id : " << id << "\n";
		}
int main() {
student s[100];
for (int i=0; i<3; i++) {
s[i].getdata();
}
cout << "\t ***Stored Record***"<< "\n";
for(int i=0; i<3; i++) {
s[i].display();
}
return 0;
}
