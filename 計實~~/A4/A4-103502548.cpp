#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
using namespace std;
void score(double t)//�����Ƶ{��
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
   clock_t t1,t2;//���y�I1.2�At2�O��enter���ɶ��I
   cout << "Press Enter to start \"Got The 10!!\"";
   if(cin.get()==10)//��enter�Y�M��
    { system("CLS"); }
   cout << "3";//�˼�3.2.1
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
   if(cin.get()==10)//��enter���y
     { t2=clock(); }
   double t3=t2-t1;//�����ɶ�
   double t=10-t3/1000;//�~�t
   /*if(t<0)//�~�t�������
     {t=-t;} */
   cout << "You got " << t3/1000 << " seconds\n";
   score( fabs(t) );//�I�s�Ƶ{������
   system("Pause");
   return 0;
}
