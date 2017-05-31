#ifndef HEROSYSTEM_H_INCLUDED
#define HEROSYSTEM_H_INCLUDED

#include<iostream>
#include<cstring>

using namespace std;

class HeroSystem
{
public:
void create(int chooseHero);//1
void create(string str, int[]);//2

string getHeroName();//2
int getATK();//4
int getDEF();//4
int getDODGE();//4

void setAbility(int[]);//3

private:
int Ability[3][4]= {{30, 30, 10, 150},{20, 40, 30, 90},{20, 20, 50, 80}}; //三位英雄的預設的屬性
int ability[4]= {10, 10, 5, 70}; //你的英雄預設的屬性
string name= "human";
};
 #endif
