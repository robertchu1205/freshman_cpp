#include "HeroSystem.h"
using namespace std;
void HeroSystem::create(int chooseHero)
{
    if(chooseHero==1)//選1的英雄時
    {
        string s("Hulk");//用s把name帶調
        name=s;
        cout << name;
        for(int i=0;i<4;i++)
        {
            ability[i]=Ability[0][i];//能力值將第一個存入
        }
    }
    else if(chooseHero==2)//選2的英雄時
    {
        string s("Iron man");//用s把name帶調
        name=s;
        cout << name;
        for(int i=0;i<4;i++)
        {
            ability[i]=Ability[1][i];//能力值將第二個存入
        }
    }
    else if(chooseHero==3)//選3的英雄時
    {
        string s("Spider man");//用s把name帶調
        name=s;
        cout << name;
        for(int i=0;i<4;i++)
        {
            ability[i]=Ability[2][i];//能力值將第三個存入
        }
    }
    else
    {
        cout << name;//都不是就直接印出human的名字
    }
}
/*string HeroSystem::getHeroName()
{
    return name;
}*/   //我認為可不用
void HeroSystem::create(string str, int a[])
{
    name=str;//將創造的人名存入name
    for(int i=0;i<4;i++)
        {
            ability[i]=a[i];//能力值存入ability
        }
}
void HeroSystem::setAbility(int a[])
{
    for(int i=0;i<4;i++)
        {
            ability[i]=a[i];//能力值存入ability
        }
}
int HeroSystem::getATK()
{
    return ability[1]+ability[3];//回傳力量加重量
}
int HeroSystem::getDEF()
{
    return ability[3];//回傳重量
}
int HeroSystem::getDODGE()
{
    return ability[2];//回傳速度
}
