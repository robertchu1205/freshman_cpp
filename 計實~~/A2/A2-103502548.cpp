#include<iostream>
using namespace std;
int main()
{
  int number,pn=2,factor;
  cout << "Please enter a number (>1): ";
  cin >> number;
  if(number<=1)
  { cout << "error!"; }
  else
  {
   cout << "Prime numbers <= " << number << " are:" << endl;
   while(pn<=number)
   {
    factor=2;
    while(factor<pn)
     {
         if(pn%factor==0)
            { break; }
        factor++;
     }
    if(pn==factor)
            cout << pn << " ";
    pn++;
   }
  }
  return 0;
}
