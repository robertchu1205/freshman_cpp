#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int year,fd,month,mp=0,day=0;
    cout << "year: ";                                                       //輸出年分
    cin >> year;
    cout << "first day of the year: ";                                      //輸出此年的第一天為星期幾
    cin >> fd;
    cout << "month: ";                                                      //月曆的月份
    cin >> month;
    if(month>12||month<1||fd<1||fd>7)                                       //不合理的情況輸出Error!
    { cout << "Error!"; }
    else
    {
      cout << "\n=====" << year << "/" << month << "=====" << endl;
      cout << "\nSun\tMon\tTue\tWed\tThu\tFri\tSat\n";                       //每一月份的總天數
      int m[12]={31,28,31,30,31,30,31,31,30,31,30,31};

          if(month!=1)
          {
            for(int i=0;i<month-1;i++)                                       //從一月算起，欲查詢月份的總天數mp
                { mp=mp+m[i]; }
                mp=mp+fd;
          }
          else if(month==1)
          { mp=fd;  }
          int fdd=mp%7;                                                         //fdd為欲查詢月份，星期幾為第一天
      for(int k=0;k<fdd;k++)                                                 //每月的第一天空格到恰當位置
        { cout << "   \t"; }
       for(int j=1;j<=m[month-1];j++)
        {
            day=fdd+j-1;

            cout << setw(2) << j;                                                         //輸出日期，setw(2)使日期向右對齊

            cout << "\t";      //空格
         if(day%7==6)                                                    //星期六換行到星期天
           { cout << endl; }

        }
    }
    return 0;
}
