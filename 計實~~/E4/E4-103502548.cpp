#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main ()
{
  int n[4],r[4];                                                   //n[]是輸入號碼的陣列，r[]是亂數號碼的陣列
  srand (time(NULL));                                              //塞入亂數到亂數陣列
  r[0]=rand()%10;
  r[1]=rand()%10;
  r[2]=rand()%10;
  r[3]=rand()%10;

  cout << "======Guess number======" << endl;
  for(int i=1;i>=1;i++)                                             //無限猜數字的迴圈
  {
        cout << r[0] << r[1] << r[2] << r[3] << endl;
      cout << "Please input 4 integer, each integer range 0~9: ";   //輸入四個數字
      cin >> n[0] >> n[1] >> n[2] >> n[3];
      if(n[0]<0||n[1]<0||n[2]<0||n[3]<0)                            //輸入數字不是0~9則ERROR
        {
          cout << "input error!";
          break;
        }
      if(n[0]>9||n[1]>9||n[2]>9||n[3]>9)
        {
          cout << "input error!";
          break;
        }
       for(int j=0;j<4;j++)                                          //對了則輸出A，錯了則輸出B
       {
          if(n[j]==r[j])
            { cout << "A "; }
          else
            { cout << "B "; }

       }
       if(n[0]!=r[0]||n[1]!=r[1]||n[2]!=r[2]||n[3]!=r[3])            //只要有錯，則再試
              { cout << "\nTry again!\n"; }
       if(n[0]==r[0]&&n[1]==r[1]&&n[2]==r[2]&&n[3]==r[3])            //對了則下次猜數字
          {
            cout << "\nGood guess! guess another one!\n\n";
            cout << "======Guess number======" << endl;
                              srand (time(NULL));                                              //塞入亂數到亂數陣列
                  r[0]=rand()%10;
                  r[1]=rand()%10;
                  r[2]=rand()%10;
                  r[3]=rand()%10;

          }
  }
  return 0;
}
