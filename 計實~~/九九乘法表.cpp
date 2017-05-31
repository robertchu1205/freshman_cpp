#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n,m;
    for(m=1;m<=9;m++)
    {
      for(n=2;n<=9;n+=2)
      {
        cout << n << "X" << m << "=" << setw(2) << n*m << "\t";
      }
      cout << endl;
    }
    cout << endl;
    int a,b;
    for(b=1;b<=9;b++)
    {
        for(a=3;a<=9;a+=2)
        {
          cout << a << "X" << b << "=" << setw(2) << a*b << "\t";
        }
        cout << endl;
    }
return 0;
}


