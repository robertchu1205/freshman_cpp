#include <iostream>
#include <windows.h>
#include <stdlib.h>
using namespace std;
void fnoc(int &x);
void choose2(int &a,int &b);

void fnoc(int &x)
{
  int ans=0;
  int n1=0;
  int n2=1;
      if (x==0||x==1)
      { x=x; }
      else
      {
          for(int i=0;i<x-1;i++)
          {
             ans=n1+n2;
             n1=n2;
             n2=ans;
          }
        x=ans;
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
           cout << "�O��ƦC����" << x << "�Ʀr��";
           fnoc(x);
           cout << x << endl;
        }
    else if(choose==2)
        {
            system("CLS");
            cout << "�п�Ja�ȩMb��:";
            cin >> a >> b;
            cout << "��ŦXaX+bY=500,��aX*bY���̤j�Ȫ�X�ȩMY��:";
            choose2(a,b);
            cout << a << "\t" << b;
        }
  return 0;
}
void choose2(int &a,int &b)
{
    int x=0,y=0,max=0,z=0,w=0;
    for(int x;x<=500;x++)
    {
      y=500-a*x;
      if(y%b==0)
      {
        if(a*x*b*y>max)
        {
          max=a*x*b*y;
          z=x; w=y;
        }
      }
    }
    a=z; b=w;
}
