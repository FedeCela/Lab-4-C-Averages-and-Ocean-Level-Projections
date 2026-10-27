#include <iostream>
using namespace std;

int main() {
    double mill = 1.5;
    double time1 = 5;
    double time2 = 7;
    double time3 = 10;

    
    double by1 = mill * time1;
    double by2 = mill * time2;
    double by3 = mill * time3;

    cout << "after 5 years the level rised by: " << by1 << " mm" << endl;
    cout << "after 7 years the level rised by: " << by2 << " mm" << endl;
    cout << "after 10 years the level rised by: " << by3 << " mm" << endl;


    return 0;
}
