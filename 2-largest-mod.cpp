#include<iostream>
using namespace std;
class largest {
private:
int m;
int n;
public:
void input();
void check();
void display();
};
void largest::input() {
cout << "Enter your first number: ";
cin >> m;
cout << "Enter your second number: ";
cin >> n;
}
void largest::check() {
if(m>=n)
cout << m;
else
cout << n;
};
void largest::display(){
cout << "Your largest value is: ";
check();
cout << endl;
}
int main() {
largest obj;
obj.input();
obj.display();
return 0;
}


