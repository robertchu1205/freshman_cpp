#include <iostream>
using namespace std;
int main()
{
    int option,size1,size2,time1=1,time2=1;
    cout << "(1)Triangle Left\n";
    cout << "(2)Triangle Right\n";
    cout << "Please select an option: ";
    cin >> option;                              //輸入選擇option
        if( option==1 )                         //選擇1:左邊三角形
        {
         cout << "Input size of triangle:";
         cin >> size1;                          //第一種三角形大小size1
          while( time1<=size1 )                 //三角形高度迴圈
          {
            for(int i=1;i<=time1;i++)           //三角形內容迴圈
                { cout << "*"; }
              cout << "\n";
              time1++;
          }

        }
        else if ( option==2 )                   //選擇2:右邊三角形
        {
         cout << "Input size of triangle:";
         cin >> size2;                          //第二種三角形大小size2
          while( time2<=size2 )                 //三角形高度迴圈
          {
            for(int j1=4;j1>=time2;j1--)        //左邊空白迴圈
              { cout << " "; }
            for(int j2=1;j2<=time2;j2++)        //右邊星號迴圈
              { cout << "*"; }
                 cout << endl;
                 time2++;
          }
        }
        else                                    //輸入錯誤三角形
           { cout << "Error!\n"; }
    return 0;
}
