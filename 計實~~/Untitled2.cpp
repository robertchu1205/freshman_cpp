#include<iostream>

using namespace std;

int main()
{
int y, m, d, total=31, w; //where y, m, d, w are represented the input of year, month and date, respectively; total and w mean the total days and 1st week's date in m-th month.
cout<< "year: ";//remind user to input year y
cin>> y;
cout<< "first day of the year: "; //remind user to input the fist day d of the year y;
cin>> d;

if (d<1 || d>7)
cout<< "Error!"; // the input date d must in the range [1, 7]
else
{
cout<< "month: "; // remind user to input month m.
cin>> m;

if (m<1 || m>12)
cout<< "Error!"; // the input month m must in the range [1, 12]
else
{
for (int i= 1; i<=m; i++) //
{
if (i==1 ||i==3 ||i==5 ||i==7 ||i==8 ||i==10 ||i==12) // 7 month with 31 days
total= 31;
else if (i==2) // February has 28 days (average year) or 29 days (leap year)
{
if (y%400==0 || (y%4==0 && y%100!=0)) // 29 days in February (leap year)
total= 29;
else // 29 days in February (average year)
total= 28;
}
else
total= 30; // remain month with 30 days
d+=total; //d is represented the total days from 1st month to i-th month
}
d-=total; //Here, d is mean total days from 1st month t0 (i-1)-th month

if (d%7==0) // d%7==0 is mean Sun, so the first day of the m-th month w is 1.
w= 1;
else
w= d%7+1;

cout<< "\n=====" << y << "/" << m<< "=====\n\nSun\tMon\tTue\tWed\tThu\tFri\tSat\n";

for (int i=1; i< w; i++) // remain one tap between each word
cout<< "\t";

for (int i=1; i<= total; i++) //There are total days in m-th month
{
if (i<10) // all digits need extra one space
cout<< " "<< i<< "\t";
else
cout << i<< "\t";

if ((i+d)%7==0) // jump to next to row
cout<< "\n";
}
}
}
return 0;
}
