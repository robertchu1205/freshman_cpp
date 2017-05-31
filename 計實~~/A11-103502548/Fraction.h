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
            c=b;//c���l����
            b=0;
            i++;
        }
        asc[a][b]=(int)str[i]-48;//����int �|�t10
        b++;//b��������
        i++;
    }
    if(c==0)//���
    {
        denominator=1;
        for(int i=0; i<b; i++)
        {
            numerator+=asc[0][i]*pow(10,b-i-1);//�Ʀr�����
        }
    }
    else if(c==1)
    {
        for(int i=0; i<c; i++)
        {
            numerator+=asc[0][i]*pow(10,c-i-1);//�Ʀr�����
        }
        for(int i=0; i<b; i++)
        {
            denominator+=asc[1][i]*pow(10,b-i-1);//�Ʀr�����
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
        cout << "not assigned";//�S���ܤ��l�M�����h��Xnot assigned
    }
    else
    {
        if(f.denominator==1)//���
        {
            output << f.numerator;
        }
        else if(f.numerator==0)
        {
            output << f.numerator;
        }
        else//����
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
                return false;//�������
                break;
            }
        }
    }
    if(denominator==0)//������0
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
    numerator=(numerator*f.denominator)+(denominator*f.numerator);//��e�ۭ�
    denominator=denominator*f.denominator;//�����q��

    if(numerator>denominator)//��̤j���]��
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
    else//��̤j���]��
    {
        int bigfac=0;
        for(int i=1; i<=numerator; i++)
        {
            if((numerator%i==0)&&(denominator%i==0))
            {
                bigfac=i;
            }
        }
        denominator=denominator/bigfac;//���̤j���]��,������²����
        numerator=numerator/bigfac;
    }
}
Fraction &Fraction::operator*(Fraction &f)
{
    numerator*=f.numerator;//���l�����l
    denominator*=f.denominator;//����������
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
        denominator/=bigfac;//���̤j���]��,������²����
        numerator/=bigfac;
    }
}
Fraction &Fraction::operator=(Fraction &f)
{
    numerator=f.numerator;
    denominator=f.denominator;
}
#endif // Fraction_H
