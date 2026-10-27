#include <iostream>
using namespace std;

int main() {
    double MM = 1.5;
    double TIME1 = 5;
    double TIME2 = 7;
    double TIME3 = 10;

    
    double BY1 = MM * TIME1;
    double BY2 = MM * TIME2;
    double BY3 = MM * TIME3;

    cout << "after 5 years the level rised by: " << BY1 << " mm" << endl;
    cout << "after 7 years the level rised by: " << BY2 << " mm" << endl;
    cout << "after 10 years the level rised by: " << BY3 << " mm" << endl;


    return 0;
}
