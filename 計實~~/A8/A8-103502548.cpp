#include "A8-103502548.h"//�ޥ�class�����Y��
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
    step1://���b �~�ֶW�X�d��
    cout << "How old are you? ";
    cin >> g.age;//��J�~��
    if(g.age>125||g.age<0)
    {
        cout << "Out of range!\n";
        goto step1;//�n�D����J
    }
    g.randColor();//�üƪ��Ƶ{��
    g.printColor();//�L�X�C�⪺�Ƶ{��
    cout << endl;
    step2://���b ��ܶW�X�d��
    cout << "1)Exchange gift 2)Change color?: ";
    cin >> g.select;
    if(g.select>2||g.select<1)
    {
        cout << "Out of range!\n";
        goto step2;//�n�D����J
    }
    else if(g.select==2)
    {
         g.randColor();//�A���ü�
         g.printColor();//�A���L�X
         cout << endl;
         goto step2;
    }
    else if(g.select==1)
    {
        g.exchangeGift();//�洫§�����Ƶ{��
    }
    return 0;
}
