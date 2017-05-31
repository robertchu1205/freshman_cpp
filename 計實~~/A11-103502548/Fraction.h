#ifndef Fraction_H
#define Fraction_H

#include <iostream>
#include <math.h>
using namespace std;

class Fraction
{
    friend ostream &operator<<(ostream &, Fraction &);

public:
    Fraction(int x,int y)
    {
        numerator=x;
        denominator=y;
    };
    ~Fraction() {};
    Fraction &operator+(Fraction &);
    Fraction &operator*(Fraction &);
    Fraction &operator=(Fraction &);
    void setFraction(char []);
    bool islegal();
private:
    int asc[2][100]= {};
    int denominator =0;
    int numerator =0;
    bool legal=true;
};
void Fraction::setFraction (char str[])
{
    denominator=0;
    numerator=0;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<100; j++)
        {
            asc[i][j]=0;
        }
    }
    int i=0,a=0,b=0,c=0;
    while(str[i]!='\0')
    {
        if(str[i]=='/')
        {
            a++;
            c=b;//cだ
            b=0;
            i++;
        }
        asc[a][b]=(int)str[i]-48;//传Θint 穦畉10
        b++;//bだダ
        i++;
    }
    if(c==0)//俱计
    {
        denominator=1;
        for(int i=0; i<b; i++)
        {
            numerator+=asc[0][i]*pow(10,b-i-1);//计计
        }
    }
    else if(c==1)
    {
        for(int i=0; i<c; i++)
        {
            numerator+=asc[0][i]*pow(10,c-i-1);//计计
        }
        for(int i=0; i<b; i++)
        {
            denominator+=asc[1][i]*pow(10,b-i-1);//计计
        }
    }
    else
    {
        legal=false;
    }
}
ostream &operator<<(ostream &output, Fraction &f)
{
    if(f.denominator==0&&f.numerator==0)
    {
        cout << "not assigned";//⊿э跑だ㎝だダ玥块not assigned
    }
    else
    {
        if(f.denominator==1)//俱计
        {
            output << f.numerator;
        }
        else if(f.numerator==0)
        {
            output << f.numerator;
        }
        else//だ计
        {
            output << f.numerator << "/" << f.denominator;
        }
    }
    return output;
}
bool Fraction::islegal()
{
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<100; j++)
        {

            if(asc[i][j]<0||asc[i][j]>9)
            {
                cout << "error input" << endl;
                return false;//ぃ俱计
                break;
            }
        }
    }
    if(denominator==0)//だダ0
    {
        cout << "error input" << endl;
        return false;
    }
    if(legal==false)
    {
        return false;
    }
    return true;
}
Fraction &Fraction::operator+(Fraction &f)
{
    numerator=(numerator*f.denominator)+(denominator*f.numerator);//ユ
    denominator=denominator*f.denominator;//だダ硄だ

    if(numerator>denominator)//衡程そ计
    {
        int bigfac=0;
        for(int i=1; i<=denominator; i++)
        {
            if((numerator%i==0)&&(denominator%i==0))
            {
                bigfac=i;
            }
        }
        denominator=denominator/bigfac;
        numerator=numerator/bigfac;
    }
    else//衡程そ计
    {
        int bigfac=0;
        for(int i=1; i<=numerator; i++)
        {
            if((numerator%i==0)&&(denominator%i==0))
            {
                bigfac=i;
            }
        }
        denominator=denominator/bigfac;//埃程そ计,传Θ程虏だ计
        numerator=numerator/bigfac;
    }
}
Fraction &Fraction::operator*(Fraction &f)
{
    numerator*=f.numerator;//だだ
    denominator*=f.denominator;//だダだダ
    if(numerator>denominator)
    {
        int bigfac;
        for(int i=1; i<=denominator; i++)
        {
            if(numerator%i==0&&denominator%i==0)
            {
                bigfac=i;
            }
        }
        denominator/=bigfac;
        numerator/=bigfac;
    }
    else
    {
        int bigfac;
        for(int i=1; i<=numerator; i++)
        {
            if(numerator%i==0&&denominator%i==0)
            {
                bigfac=i;
            }
        }
        denominator/=bigfac;//埃程そ计,传Θ程虏だ计
        numerator/=bigfac;
    }
}
Fraction &Fraction::operator=(Fraction &f)
{
    numerator=f.numerator;
    denominator=f.denominator;
}
#endif // Fraction_H
