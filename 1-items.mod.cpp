#include<iostream>
using namespace std;
class item {
    private:
    int number;
    float cost;
    public:
    void getdata();
    void disp();
    };
        
        void item :: getdata() {
        cout << "Insert number: ";
        cin >> number;
        cout << "Insert cost: ";
        cin >> cost;
        }
        
        void item :: disp() {
        cout << "Number is: " << number << endl;;
        cout << "Cost is: " << cost << endl;
        }
        
        int main() {
        item x;
        cout << "Object x" << endl;
        x.getdata();
        x.disp();  
        
        item y;
        cout << "Object Y" << endl;
        x.getdata();
        x.disp();
       
       return 0;
       }
