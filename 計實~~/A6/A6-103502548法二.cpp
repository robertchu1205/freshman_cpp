#include <iostream>
using namespace std;
int choose1(int n,int m)
{
    if(m==0||n==m)
    { return 1; }
    else
    {
      return choose1(n-1,m)+choose1(n-1,m-1);
    }
}
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
      cout << item << ") is: " << choose1(row-1,item-1);
    }
    else if(choose==2)
    {
      int i=1,j=1,sum=0;
      int pascal[i][j];
      cout << "Input a target number: ";
      cin >> tn;
      while(tn<=0)
      {
          cout << "Input error! try again\n";
          cout << "Input a target number: ";
          cin >> tn;
      }
      while(sum<tn)
      {

          if(i=j||j=0)
          {
              pascal[i][j]=1
          }
          else
          {
              pascal[i][j]=pascal[i-1][j]+pascal[i-1][j-1];
          }
      }
        cout << "\n\nrow= " << i << ", " << "num= " << j;
              cout << "\nsum= " << sum << endl;
    }
    return 0;
}
