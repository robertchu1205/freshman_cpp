#include<iostream>
using namespace std;
int main()
{
    int number,factor=1;
    cout << "Key in a number: ";
    cin >> number;
    if (number<=0)
    { cout << "Out of range!" << endl; }
    else if ( number>0 )
    {
       cout << "Factors of " << number << " are:" << endl;
      while( factor<=number )
      {
         if ( number%factor==0 )
         { cout << factor <<  " "; }
         factor++;
      }
    }
    return 0;
}
