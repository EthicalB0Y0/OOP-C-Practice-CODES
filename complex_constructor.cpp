#include<iostream>
using namespace std;
class complex {
float x,y;
public:
complex() {
x=7;
y=5;}
complex(float a) {
x=a;
y=a;
}
complex(float a,float b) {
x=a;
y=b;
}
complex sum(complex c1,complex c2);
void display(); 
};	
	complex complex::sum(complex c1, complex c2) {
	complex c3;
	c3.x = c1.x + c2.x;
	c3.y = c1.y + c2.y;
	return c3;
	}	
		void complex::display(){
		cout << "sum of : " << x << " + "  << y << " i" << "\n";
			}
	int main() {
	complex c1(8);
	complex c2(3,9);
	complex c3;
	c3 = c3.sum(c1,c2);
	c1.display();
	c2.display();
	cout << "The sum would be look like this : " <<"\n";
	c3.display();
	return 0;
	}
