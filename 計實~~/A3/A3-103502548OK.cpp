#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int year,fd,month,mp=0,day=0;
    cout << "year: ";                                                       //��X�~��
    cin >> year;
    cout << "first day of the year: ";                                      //��X���~���Ĥ@�Ѭ��P���X
    cin >> fd;
    cout << "month: ";                                                      //��䪺���
    cin >> month;
    if(month>12||month<1||fd<1||fd>7)                                       //���X�z�����p��XError!
    { cout << "Error!"; }
    else
    {
      cout << "\n=====" << year << "/" << month << "=====" << endl;
      cout << "\nSun\tMon\tTue\tWed\tThu\tFri\tSat\n";                       //�C�@������`�Ѽ�
      int m[12]={31,28,31,30,31,30,31,31,30,31,30,31};

          if(month!=1)
          {
            for(int i=0;i<month-1;i++)                                       //�q�@���_�A���d�ߤ�����`�Ѽ�mp
                { mp=mp+m[i]; }
                mp=mp+fd;
          }
          else if(month==1)
          { mp=fd;  }
          int fdd=mp%7;                                                         //fdd�����d�ߤ���A�P���X���Ĥ@��
      for(int k=0;k<fdd;k++)                                                 //�C�몺�Ĥ@�ѪŮ�����m
        { cout << "   \t"; }
       for(int j=1;j<=m[month-1];j++)
        {
            day=fdd+j-1;

            cout << setw(2) << j;                                                         //��X����Asetw(2)�Ϥ���V�k���

            cout << "\t";      //�Ů�
         if(day%7==6)                                                    //�P���������P����
           { cout << endl; }

        }
    }
    return 0;
}
