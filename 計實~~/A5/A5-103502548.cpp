#include <iostream>
#include <stdlib.h>
using namespace std;
void select11(int );//�w�q�Ƶ{��
void select12(int );
void select21(int );
void select22(int );
int main()
{
    int select1=0,select2=0,bn=0,on=0,dtob=0,dtoo=0;
    cout << "(1)Binary/Octal convert to Decimal\n";
    cout << "(2)Decimal convert to Binary/Octal\nSelect:";
    cin >> select1;
    if(select1!=1&&select1!=2)//���~
    { cout << "Input Error!!!"; return 0; }
    cout << "(1)Binary to Decimal\n(2)Octal to Decimal\nSelect:";
    cin >> select2;
    if(select2!=1&&select2!=2)//���~
    { cout << "Input Error!!!"; return 0; }
    if(select1==1&&select2==1)
    {
      cout << "Input Binary number:";
      cin >> bn;
      if(bn<0)//���~
      { cout << "Input Error!!!"; return 0; }
      select11(bn);//�I�s�Ƶ{��
    }
    if(select1==1&&select2==2)
    {
      cout << "Input Octal number:";
      cin >> on;
      if(on<0)//���~
      { cout << "Input Error!!!"; return 0; }
      select12(on);//�I�s�Ƶ{��
    }
    if(select1==2&&select2==1)
    {
      cout << "Input number:";
      cin >> dtob;
      if(dtob<0)//���~
      { cout << "Input Error!!!"; return 0; }
      select21(dtob);//�I�s�Ƶ{��
    }
    if(select1==2&&select2==2)
    {
      cout << "Input number:";
      cin >> dtoo;
      if(dtoo<0)//���~
      { cout << "Input Error!!!"; return 0; }
      select22(dtoo);//�I�s�Ƶ{��
    }
    return 0;
}
void select11(int a)//�G�i����Q�i�쪺�Ƶ{��
{
    int ans=0,b=1,c=0;
    while(a!=0)
    {
      c=(a%10);
      ans+=c*b;
      b=b*2;
      a=a/10;
    }
    cout << ans;
}
void select12(int a)//�K�i����Q�i�쪺�Ƶ{��
{
  int ans=0,b=1,c=0;
    while(a!=0)
    {
      c=(a%10);
      ans+=c*b;
      b=b*8;
      a=a/10;
    }
    cout << ans;
}
void select21(int a)//�Q�i����G�i��Ƶ{��
{
    int  i=0;
    int ans[i];
    while(a!=0)
    {

        ans[i]=a%2;
        i++;
        a=a/2;
    }
    for (i ; i>0; i--)
    {
        cout<<ans[i-1];
    }
}
void select22(int a)//�Q�i����K�i��Ƶ{��
{
    int i=0;
    int ans[i];
    while(a>0)
    {
        ans[i]=a%8;
        i++;
        a/=8;
    }
    for(i ; i>0; i--)
    {
        cout<<ans[i-1];
    }
}
