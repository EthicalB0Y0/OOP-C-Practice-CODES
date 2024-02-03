#include <iostream>
using namespace std;
	class math{
	private:
	int a,b;
	public:
	void getvalue(int a, int b);
	void sum();
	void product();
};
	void math::getvalue(int x, int y) {
    a = x;
    b= y;
	}
		 void math::sum() {
		 cout << "sum of a and b is : " << a+b << endl;
		 }
		 	void math::product() {
		 	cout << "product  of a and b is: " << a*b << endl;
		 	}
int main() {
		math j;
		j.getvalue(10,4);
		j.sum();
		j.product();
		
		return 0;
				}
						
