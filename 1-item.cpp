#include<iostream>
using namespace std;
class item {
    private:
    int number;
    float cost;
    public:
    void getdata(int a, float b) {
    number = a;
    cost = b;
    }
    void putdata() {
    cout << "number: " << number << endl;
    cout << "cost: " << cost << endl;
    }
    };
    int main() {
    item x;
    cout << "Object x" << endl;
    x.getdata(100,12.909);
    x.putdata();
    item y;
    cout << "Object y" << endl;
    y.getdata(200,103.45);
    y.putdata();
    return 0;
    }
    
