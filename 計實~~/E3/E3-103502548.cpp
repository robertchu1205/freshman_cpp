#include <iostream>
using namespace std;
int main()
{
    int option,size1,size2,time1=1,time2=1;
    cout << "(1)Triangle Left\n";
    cout << "(2)Triangle Right\n";
    cout << "Please select an option: ";
    cin >> option;                              //��J���option
        if( option==1 )                         //���1:����T����
        {
         cout << "Input size of triangle:";
         cin >> size1;                          //�Ĥ@�ؤT���Τj�psize1
          while( time1<=size1 )                 //�T���ΰ��װj��
          {
            for(int i=1;i<=time1;i++)           //�T���Τ��e�j��
                { cout << "*"; }
              cout << "\n";
              time1++;
          }

        }
        else if ( option==2 )                   //���2:�k��T����
        {
         cout << "Input size of triangle:";
         cin >> size2;                          //�ĤG�ؤT���Τj�psize2
          while( time2<=size2 )                 //�T���ΰ��װj��
          {
            for(int j1=4;j1>=time2;j1--)        //����ťհj��
              { cout << " "; }
            for(int j2=1;j2<=time2;j2++)        //�k��P���j��
              { cout << "*"; }
                 cout << endl;
                 time2++;
          }
        }
        else                                    //��J���~�T����
           { cout << "Error!\n"; }
    return 0;
}
