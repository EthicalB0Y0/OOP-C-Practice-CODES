#include <iostream>
using namespace std;
int sum(int*, int*);
int main() {
	int x=5,y=7,result;
	
	int *px;
	int *py;
		
	py = &y;
	px = &x;
	
	result = sum(&x,&y);
	cout << "\t result is " << result << "\n";
					}
			
			int sum(int *x, int *y){
			int c;
			c = *x + *y;
			return c; 
						}
	
	
		