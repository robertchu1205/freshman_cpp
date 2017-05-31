#include <iostream>
using namespace std;
int pascalf(int n,int m)
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
    while(choose!=1&&choose!=2)
      {
          cout << "Wrong selection, try again\n";
          cout << "Select:";
          cin >> choose;
      }
    if(choose==1)
    {
      cout << "Input Row and Item: ";
      cin >> row >> item;

      while(item>row)
      {
         cout << "Input error! try again\n";
         cout << "Input Row and Item: ";
         cin >> row >> item;
      }
      cout << "The value of Pascal(" << row << ", ";
      cout << item << ") is: " << pascalf(row-1,item-1);
    }
    else if(choose==2)
    {
      int row2=2,item2=2,sum=0;
      cout << "Input a target number: ";
      cin >> tn;
      while(tn<=0)
      {
          cout << "Input error! try again\n";
          cout << "Input a target number: ";
          cin >> tn;
      }
        for(row2;;row2++)
              {
                  for(item2;item2<=row2;item2++)
                  {
                      sum=sum+pascalf(row2-1,item2-1);
                      cout << pascalf(row2-1,item2-1);
                        if(sum>=tn)
                        { break; }
                  }
                  if(sum>=tn)
                  { break; }
                  cout << endl;
              }
              cout << "\n\nrow= " << row2-1 << ", " << "num= " << item2-1;
              cout << "sum= " << sum;
    }
    return 0;
}
