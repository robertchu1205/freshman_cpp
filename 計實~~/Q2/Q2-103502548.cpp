#include "Airplane.h"
#include <iostream>
using namespace std;
//friend ostream &operator<<(ostream &,a &)
//ostream a &operator =()
int main()
{
    cout << "===Step 1===\n";
    Airplane a1(1,250);
    a1.setPlane(1,250);
    cout << "Show information of airplane1" << endl;
    a1.show();
    cout << "\n===Step 2===\n";
    Airplane Airplane[numPlane];
    Airplane[0].setPlane(2,260);
    Airplane[1].setPlane(3,270);
    Airplane[2].setPlane(4,280);
    Airplane[3].setPlane(5,290);
    Airplane[4].setPlane(6,300);
    cout << "Show information of airplane[numPlane]" << endl;
    for(int i=0;i<5;i++)
    {
        Airplane[i].show();
    }
    cout << "\n===Step 3===\n";
    Airplane::Sum();
    cout << "\n===Step 4===\n";
    Bomber b1;
    b1.setPlane(7,450);
    b1.setbomb(99);
     cout << "Show information of bomber1" << endl;
    b1.show();
    cout << "\n===Step 5===\n";
    Airplane::Sum();
    Bomber::Sum();
}
