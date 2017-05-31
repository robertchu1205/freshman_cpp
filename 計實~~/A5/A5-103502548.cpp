#include <iostream>
#include <stdlib.h>
using namespace std;
void select11(int );//定義副程式
void select12(int );
void select21(int );
void select22(int );
int main()
{
    int select1=0,select2=0,bn=0,on=0,dtob=0,dtoo=0;
    cout << "(1)Binary/Octal convert to Decimal\n";
    cout << "(2)Decimal convert to Binary/Octal\nSelect:";
    cin >> select1;
    if(select1!=1&&select1!=2)//錯誤
    { cout << "Input Error!!!"; return 0; }
    cout << "(1)Binary to Decimal\n(2)Octal to Decimal\nSelect:";
    cin >> select2;
    if(select2!=1&&select2!=2)//錯誤
    { cout << "Input Error!!!"; return 0; }
    if(select1==1&&select2==1)
    {
      cout << "Input Binary number:";
      cin >> bn;
      if(bn<0)//錯誤
      { cout << "Input Error!!!"; return 0; }
      select11(bn);//呼叫副程式
    }
    if(select1==1&&select2==2)
    {
      cout << "Input Octal number:";
      cin >> on;
      if(on<0)//錯誤
      { cout << "Input Error!!!"; return 0; }
      select12(on);//呼叫副程式
    }
    if(select1==2&&select2==1)
    {
      cout << "Input number:";
      cin >> dtob;
      if(dtob<0)//錯誤
      { cout << "Input Error!!!"; return 0; }
      select21(dtob);//呼叫副程式
    }
    if(select1==2&&select2==2)
    {
      cout << "Input number:";
      cin >> dtoo;
      if(dtoo<0)//錯誤
      { cout << "Input Error!!!"; return 0; }
      select22(dtoo);//呼叫副程式
    }
    return 0;
}
void select11(int a)//二進位轉十進位的副程式
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
void select12(int a)//八進位轉十進位的副程式
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
void select21(int a)//十進位轉二進位副程式
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
void select22(int a)//十進位轉八進位副程式
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
