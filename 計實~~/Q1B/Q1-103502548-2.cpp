#include <iostream>
#include <stdlib.h>
using namespace std;
void Encrypt (int (&Ary)[5],int Key[5]);
int main()
{
    int Ary[5]={0};
    int Key[5]={0};
    bool check=1;

      do{
            check=1;
          cout << "Input five number (0~9): \n";
          cin >> Ary[0] >> Ary[1] >> Ary[2] >> Ary[3] >> Ary[4];
        for(int i=0;i<5;i++)
        {
            if(Ary[i]<0)
            {
                cout << "Input Error!\n";
                cout << Ary[i] << "<0" << endl;
                check=0;
            }
            if(Ary[i]>9)
            {
                                cout << "Input Error!\n";
                cout << Ary[i] << ">9" << endl;
                check=0;
            }
        }
    }
    while(check==0);
    cout << "Key (integer): \n";
    cin >> Key[0] >> Key[1] >> Key[2] >> Key[3] >> Key[4];
    Encrypt(Ary,Key);
    cout << "CipherNumber: \n";
    for(int i=0;i<5;i++)
    { cout << Ary[i] << " "; }
    system("Pause");
    return 0;
}
void Encrypt(int (&Ary)[5],int Key[5])
{
    for(int i=0;i<5;i++)
    { Ary[i]=(Ary[i]+Key[i])%10; }
}
