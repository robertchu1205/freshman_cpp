#include <iostream>
#include <stdlib.h>
using namespace std;
int pascalf(int n,int m)//巴斯卡三角形的副程式
{
    if(m==0||n==m)
    { return 1; }
    else
    {
      return pascalf(n-1,m)+pascalf(n-1,m-1);
    }
}
void choose2(int );
int main()
{
    int choose=0,row=0,item=0,tn=0;
    cout << "(1)Find Pascal Value\n(2)Find Sum ";
    cout << "over Pascal\nSelect:";
    cin >> choose;
    while(choose!=1&&choose!=2)//防呆，要求重輸入
      {
          cout << "Wrong selection, try again\n";
          cout << "Select:";
          cin >> choose;
      }
    if(choose==1)//選項1
    {
      cout << "Input Row and Item: ";
      cin >> row >> item;

      while(item>row)//防呆，要求重輸入
      {
         cout << "Input error! try again\n";
         cout << "Input Row and Item: ";
         cin >> row >> item;
      }
      cout << "The value of Pascal(" << row << ", ";
      cout << item << ") is: " << pascalf(row-1,item-1);//引用副程式
    }
    else if(choose==2)//選項2
    {
      int row2=1,item2=1,sum=0;
      cout << "Input a target number: ";
      cin >> tn;
      while(tn<=0)//防呆，要求重輸入
      {
          cout << "Input error! try again\n";
          cout << "Input a target number: ";
          cin >> tn;
      }
        for(row2=1;;row2++)//印出小於目標總和的巴斯卡三角形
              {
                  for(item2=1;item2<=row2;item2++)
                  {
                      sum=sum+pascalf(row2-1,item2-1);
                      cout << pascalf(row2-1,item2-1) << " ";
                        if(sum>=tn)
                        { break; }
                  }
                  if(sum>=tn)
                  { break; }
                  cout << endl;
              }
              cout << "\n\nrow= " << row2 << ", " << "num= " << item2;
              cout << "\nsum= " << sum;
    }
    system("Pause");
    return 0;
}
