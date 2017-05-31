#include <iostream>
#include <windows.h>
#include <stdlib.h>
using namespace std;
void choose2(int &a,int &b);

int fnoc(int x)
{
      if (x==0||x==1)
      { return x; }
      else
      {
         return fnoc(x-1)+fnoc(x-2);
      }
}
int main()
{
  int choose,x,a,b;
  cout << "(1)費氏數列\n(2)求X與Y\n";
  cin >> choose;
    if(choose!=2||choose!=1)
    { cout << "選擇錯誤!!"; }
    if(choose==1)
        {
           system("CLS");
           cout << "請輸入費氏數列的欲求項:";
           cin >> x;
           cout << "費氏數列的第" << x << "數字為" << fnoc(x);
        }
    else if(choose==2)
        {
            system("CLS");
            cout << "請輸入a值和b值:";
            cin >> a >> b;
            cout << "當符合aX+bY=500,使aX*bY為最大值的X值和Y值:\n";
            choose2(a,b);
            cout << a << "\t" << b;
        }
  return 0;
}
void choose2(int &a,int &b)
{
    int Max=0;
    int x,Mx,My,y;

  for(int x=1;x<=500;x++)
  {
     int iy=(500-a*x);
     y=iy/b;
     if(iy%b==0)
     {
         if(a*b*x*y>Max)
         {
            Max=a*x*b*y;
            Mx=x; My=y;
         }
     }
  }
  a=Mx; b=My;
}
