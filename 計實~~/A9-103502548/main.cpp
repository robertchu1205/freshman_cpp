#include "HeroSystem.h"
#include "HeroSystem.cpp"
using namespace std;
int main()
{
    HeroSystem h;
    int choose;
    rechoose://防呆要求重輸入
    cout << "===MENU===\n";
    cout << "(1) Choose Hero\n";
    cout << "(2) Create a Hero\n";
    cout << "(3) Assign new ability for your hero\n";
    cout << "(4) Show ATK, DEF and DODGE\n";
    cout << "(5) Exit\n";
    cin >> choose;
    while(choose!=5)//不是選5就無限迴圈
    {
        if(choose==1)
        {
            int cho1;
            cout << "(1: Hulk; 2: Iron man; 3: Spider man; other: Human); ";
            cin >> cho1;
            cout << "Your hero is : ";
            h.create(cho1);//呼叫選英雄的副程式
            cout << endl << endl;
            goto rechoose;//要求重選擇
        }
         else if(choose==2)
        {
            int a[4]={ };
            string newhero;
            cout << "Name: ";
            cin >> newhero;
            cout << "Assign abilities for your hero (blood, power, speed, weight)\n";
            cin >> a[0] >> a[1] >> a[2] >> a[3];
            h.create(newhero,a);//呼叫存入創造的英雄名跟能力的副程式
            cout << endl;
            goto rechoose;//要求重選擇
        }
         else if(choose==3)
        {
            int a[4]={ };
            cout << "Change abilities for your hero (blood, power, speed, weight)\n";
            cin >> a[0] >> a[1] >> a[2] >> a[3];
            h.setAbility(a);//呼叫改能力副程式
            cout << endl;
            goto rechoose;//要求重選擇
        }
         else if(choose==4)
        {
            cout << "ATK: " << h.getATK() << endl;//計算攻擊
            cout << "DEF: " << h.getDEF() << endl;//計算防禦
            cout << "DODGE: " << h.getDODGE() << endl << endl;//計算躲避
            goto rechoose;//要求重選擇
        }
         else
        {
            cout << "Input error!!!\n";//輸入錯誤
            goto rechoose;//要求重選擇
        }
    }
    return 0;
}
