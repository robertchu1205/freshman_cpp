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
  cout << "(1)�O��ƦC\n(2)�DX�PY\n";
  cin >> choose;
    if(choose!=2||choose!=1)
    { cout << "��ܿ��~!!"; }
    if(choose==1)
        {
           system("CLS");
           cout << "�п�J�O��ƦC�����D��:";
           cin >> x;
           cout << "�O��ƦC����" << x << "�Ʀr��" << fnoc(x);
        }
    else if(choose==2)
        {
            system("CLS");
            cout << "�п�Ja�ȩMb��:";
            cin >> a >> b;
            cout << "��ŦXaX+bY=500,��aX*bY���̤j�Ȫ�X�ȩMY��:\n";
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
