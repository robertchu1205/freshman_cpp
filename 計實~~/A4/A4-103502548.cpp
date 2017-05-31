#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
using namespace std;
void score(double t)//評分副程式
{
  if(t==0)
    { cout << "You are God\n"; }
  else if(t<=0.1&&t>0)
    { cout << "You are Superman\n"; }
  else if(t<=0.5&&t>0.1)
    { cout << "You are Pro\n"; }
  else if(t<=1&&t>0.5)
    { cout << "You are human\n"; }
  else
    { cout << "You are idiot\n"; }
}
int main()
{
   clock_t t1,t2;//停頓點1.2，t2是按enter的時間點
   cout << "Press Enter to start \"Got The 10!!\"";
   if(cin.get()==10)//按enter即清除
    { system("CLS"); }
   cout << "3";//倒數3.2.1
   Sleep(1000);
   system("CLS");
   cout << "2";
   Sleep(1000);
   system("CLS");
   cout << "1";
   Sleep(1000);
   system("CLS");
   cout << "Start!\nPress Enter to stop\n";
   t1=clock();
   if(cin.get()==10)//按enter停頓
     { t2=clock(); }
   double t3=t2-t1;//按的時間
   double t=10-t3/1000;//誤差
   /*if(t<0)//誤差取絕對值
     {t=-t;} */
   cout << "You got " << t3/1000 << " seconds\n";
   score( fabs(t) );//呼叫副程式評分
   system("Pause");
   return 0;
}
