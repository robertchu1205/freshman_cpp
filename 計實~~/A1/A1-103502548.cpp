#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
float x,y,z; int choose=0;
cout << "Please enter x, y and z!" << endl;
cin >> x >> y >> z;
cout << "\n";
cout << "Choose one problem! (1-3)" << endl;
cout << "(1) Sum of x, y and z = ?" << endl;
cout << "(2) Mean of x, y and z = ?" << endl;
cout << "(3) (2x-y+2z)^2 = ?\n" <<endl;
cin >> choose;
float mean=(x+y+z)/3;
if(choose==1)
 { cout << "\nAnswer:" << x+y+z << endl; }
else if(choose==2)
 { cout << "\nAnswer:" << mean << endl; }
else if(choose==3)
 { cout << "\nAnswer:" << (x*2-y+z*2)*(x*2-y+z*2) << endl; }
else
 { cout << "\n您問題選錯了!!!" << endl; }
 return 0;
}
