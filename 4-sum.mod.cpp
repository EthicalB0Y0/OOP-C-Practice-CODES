#include <iostream>
using namespace std;
	class math{
	private:
	int a,b;
	public:
	void getvalue();
	void sum();
	void product();
};
	void math::getvalue() {
    cout << "Enter your first number: ";
    cin >> a;
    cout << "Enter your second number: ";
    cin >> b;
	}
		 void math::sum() {
		 cout << "sum of a and b is : " << a+b << endl;
		 }
		 	void math::product() {
		 	cout << "product  of a and b is: " << a*b << endl;
		 	}
int main() {
		math j;
		j.getvalue();
		j.sum();
		j.product();
		
		return 0;
				}
						
