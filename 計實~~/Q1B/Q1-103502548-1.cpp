#include <iostream>
using namespace std;
int main()
{
    int money=0,scb=0,scs=0,maxw=0,w1=0,w2=0,c10=0,c4=0;
    cout << "===Menu===\n";
    cout << "(1) 4kg (200 NTD)\n";
    cout << "(2) 10kg (550 NTD)\n";
    cout << "How much money do you have? ";
    cin >> money;
    while(money<0)//若錢為負，輸出錯誤，要求輸入到對為止
    {
        cout << "Input Error!\n";
        cout << "How much money do you have? ";
        cin >> money;
    }
     int m1=money;
     int m2=money;
        for(c4;m1>=200;c4++)//算法1:直接用200元的去算
        { m1=m1-200; }
        maxw=4*c4;
        w1=maxw;
        money=m1;

        for(scb;m2>=550;scb++)//算法2:先算550元再算200元
        {
          m2=m2-550;
        }
        for(scs;m2>=200;scs++)
        {
          m2=m2-200;
        }
        w2=10*scb+4*scs;
        if(w2>maxw)//判斷哪種算法的重量較大
        {
            maxw=w2;
            c4=scs;
            c10=scb;
            money=m2;
        }
    cout << "Total weight: " << maxw << endl;//輸出較大的重量
    cout << "Remain money: " << money << endl;//輸出較多的剩餘錢
    return 0;
}
