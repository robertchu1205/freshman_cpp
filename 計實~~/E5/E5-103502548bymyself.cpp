#include <iostream>
#include <windows.h>
#include <stdlib.h>
using namespace std;
void fnoc(int x);
void choose2(int &a,int &b);

void fnoc(int x)
{
      if (x==0||x==1)
      { cout << x; }
      else if (x==2)
      { cout << "1"; }
      else
      {
         fnoc(x)=fnoc(x-1)+fnoc(x-2);
        cout << fnoc(x);
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
          z=x; w=y/b;
          max=a*z*b*w;

        }
      }
    }
    a=z; b=w;
}
