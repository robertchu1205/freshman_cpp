#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>
using namespace std;
int main ()
{
    //int month,day;
    ifstream month,day;
    cin >> month >> day;
    while((!month.eof())||(!day.eof())
    {
        if((2*month+day)%3==0)
        { cout << "普通\n"; }
        if((2*month+day)%3==1)
        { cout << "吉\n"; }
        if((2*month+day)%3==2)
        { cout << "大吉\n"; }
    }
    system ("pause");
    return 0;
}
