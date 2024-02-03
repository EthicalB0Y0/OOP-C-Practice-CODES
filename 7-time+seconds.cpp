#include<iostream> 
using namespace std;

class time {
    int hr;
    int min;
    int sec;

public:
    void input();
    void sum(time t1, time t2, time t3);
    void display();
}t1,t2,t3,t4;

void time::input() {
    cout << "\tEnter hour: ";
    cin >> hr;
    cout << "\tEnter minutes: ";
    cin >> min;
    cout << "\tEnter seconds: ";
    cin >> sec;
}

void time::sum(time t1, time t2, time t3) {
    sec = t1.sec + t2.sec + t3.sec;
    min = t1.min + t2.min + t3.min + sec / 60;
    sec = sec % 60;
    hr = t1.hr + t2.hr + t3.hr + min / 60;
    min = min % 60;
}

void time::display() {
    cout << "\thour is: " << hr << " hours" << "\n";
    cout << "\tminute is: " << min << " minutes" << "\n";
    cout << "\tsecond is: " << sec << " seconds" << "\n";
}

int main() {
   // time t1, t2, t3, t4;
    t1.input();
    t2.input();
    t3.input();
    t4.sum(t1, t2, t3);
    cout << " \t***TOTAL TIME WOULD BE LIKE THIS***" << "\n";
    t4.display();
    cout << " \t*** Provided T3 TIME IS : "  << "\n";
    t3.display();
    cout << " \t*** Provided T2 TIME IS : "  << "\n";
    t2.display();
    cout << " \t*** Provided T1 TIME IS : "  << "\n";
    t1.display();
    return 0; 
}
