#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main ()
{
  int n[4],r[4];                                                   //n[]�O��J���X���}�C�Ar[]�O�üƸ��X���}�C
  srand (time(NULL));                                              //��J�üƨ�üư}�C
  r[0]=rand()%10;
  r[1]=rand()%10;
  r[2]=rand()%10;
  r[3]=rand()%10;

  cout << "======Guess number======" << endl;
  for(int i=1;i>=1;i++)                                             //�L���q�Ʀr���j��
  {
        cout << r[0] << r[1] << r[2] << r[3] << endl;
      cout << "Please input 4 integer, each integer range 0~9: ";   //��J�|�ӼƦr
      cin >> n[0] >> n[1] >> n[2] >> n[3];
      if(n[0]<0||n[1]<0||n[2]<0||n[3]<0)                            //��J�Ʀr���O0~9�hERROR
        {
          cout << "input error!";
          break;
        }
      if(n[0]>9||n[1]>9||n[2]>9||n[3]>9)
        {
          cout << "input error!";
          break;
        }
       for(int j=0;j<4;j++)                                          //��F�h��XA�A���F�h��XB
       {
          if(n[j]==r[j])
            { cout << "A "; }
          else
            { cout << "B "; }

       }
       if(n[0]!=r[0]||n[1]!=r[1]||n[2]!=r[2]||n[3]!=r[3])            //�u�n�����A�h�A��
              { cout << "\nTry again!\n"; }
       if(n[0]==r[0]&&n[1]==r[1]&&n[2]==r[2]&&n[3]==r[3])            //��F�h�U���q�Ʀr
          {
            cout << "\nGood guess! guess another one!\n\n";
            cout << "======Guess number======" << endl;
                              srand (time(NULL));                                              //��J�üƨ�üư}�C
                  r[0]=rand()%10;
                  r[1]=rand()%10;
                  r[2]=rand()%10;
                  r[3]=rand()%10;

          }
  }
  return 0;
}
