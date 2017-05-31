#include "A8-103502548.h"//引用class的標頭檔
#include <iostream>
#include <stdlib.h>
using namespace std;
Giftsystem::Giftsystem()
{
    //ctor
}

Giftsystem::~Giftsystem()
{
    //dtor
}
int main()
{
    Giftsystem g;
    step1://防呆 年齡超出範圍
    cout << "How old are you? ";
    cin >> g.age;//輸入年齡
    if(g.age>125||g.age<0)
    {
        cout << "Out of range!\n";
        goto step1;//要求重輸入
    }
    g.randColor();//亂數的副程式
    g.printColor();//印出顏色的副程式
    cout << endl;
    step2://防呆 選擇超出範圍
    cout << "1)Exchange gift 2)Change color?: ";
    cin >> g.select;
    if(g.select>2||g.select<1)
    {
        cout << "Out of range!\n";
        goto step2;//要求重輸入
    }
    else if(g.select==2)
    {
         g.randColor();//再次亂數
         g.printColor();//再次印出
         cout << endl;
         goto step2;
    }
    else if(g.select==1)
    {
        g.exchangeGift();//交換禮物的副程式
    }
    return 0;
}
