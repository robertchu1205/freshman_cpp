#include<iostream>
#include<windows.h>
#include<stdlib.h>
using namespace std;

void Fibonacci(int &c)
{
int count=0,temp=0,Fib_1=0,Fib_2=0;
while(count<=c) //while會跑c次,也就是使用者輸入的次數
{
if(count==1) //一開始給初值
{
count++;
Fib_2=1;
}
else if(count>1) //接著開始往後相加
{
count++;
temp=Fib_2;
Fib_2=Fib_2+Fib_1;
Fib_1=temp;
}
else count++;
}
c=Fib_2; //將結果代入c
}

void Calculate(int &a,int &b)
{
int x,y,Max=0,TempMax=0;
for(int i=0;i<501;i++) //aX*bY=500 不考慮負數 a跟b最小為1的情形下 所以最多跑500次
{
for(int j=0;j<501;j++)
{
if((a*i+b*j)==500)
{
TempMax=(a*i)*(b*j);
if(TempMax>Max) //MAX為最大值,每次有最大值就替換並且記錄X跟Y
{
Max=TempMax;
x=i;
y=j;
}
}
}
}
a=x;
b=y;
}

int main()
{
int option,Num1,Num2,Answer;
cout<<"(1)費氏數列\n(2)求X與Y\n";
cin>>option;
if(option==1)
{
system("cls");
cout<<"請輸入一值,求費氏數列"<<endl;
cin>>Num1;
Fibonacci(Num1);
cout<<"Answer is: "<<Num1<<endl;
}
else if(option==2)
{
system("cls");
cout<<"請輸入兩值(a,b),在符合aX+bY=500情形下,求X與Y使aX*bY為最大值"<<endl;
cin>>Num1>>Num2;
Calculate(Num1,Num2);
cout<<"X="<<Num1<<"\tY="<<Num2<<endl;
}
else cout<<"ERROR!"<<endl;

system("pause");
return 0;
}
