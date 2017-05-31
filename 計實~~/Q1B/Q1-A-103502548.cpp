#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int havem=0,num[5]={0};
    cout << "===Menu===" << endl;
    cout << "(1) 1 NTD" << endl;
    cout << "(2) 5 NTD" << endl;
    cout << "(3) 10 NTD" << endl;
    cout << "(4) 50 NTD" << endl;
    cout << "(5) 100 NTD" << endl;
    cout << "How many money you have? ";
    cin >> havem;
    while(havem<0)
    {
        cout << "How many money you have? ";
        cin >> havem;
    }
    num[4]=havem/100;
    havem=havem%100;
    num[3]=havem/50;
    havem=havem%50;
    num[2]=havem/10;
    havem=havem%10;
    num[1]=havem/5;
    havem=havem%5;
    num[0]=havem/1;
    havem=havem%1;
    cout << "(1) 1 NTD: " << num[0] << endl;
    cout << "(2) 5 NTD: " << num[1] << endl;
    cout << "(3) 10 NTD: " << num[2] << endl;
    cout << "(4) 50 NTD: " << num[3] << endl;
    cout << "(5) 100 NTD: " << num[4] << endl;
    system("Pause");
    return 0;
}
