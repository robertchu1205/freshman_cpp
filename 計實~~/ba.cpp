#include<iostream>

using namespace std;

void qq(int ,int);
int main()
{
    int m,n;
    cin>>m>>n;//这里同样没有检查m、n有效性，自己保证m>n,都是正整数
    qq(m,n);

    return 0;
}
void qq(int m,int n)
{
    int a=0,b=1,a0=1,b0=0;
    int c=m,d=n;

    int q=c/d;
    int r=c%d;

    while(r!=0)
    {
         c=d;
         d=r;
         int t=a0;
         a0=a;
         a=t-q*a;

         t=b0;
         b0=b;
         b=t-q*b;

         q=c/d;
         r=c%d;

    }
    cout<<"a="<<a<<"  b="<<b<<"  d="<<d<<endl;
}
