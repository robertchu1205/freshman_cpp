#ifndef E12-103502548_H_INCLUDED
#define E12-103502548_H_INCLUDED

#include <iostream>

#define pi 3.14159//�w�qPI����

using namespace std;

class base {//�����O
public:
    void setvalue(int a,int b)//��Ȧs�Jprotected
    {
        height=a;
        width=b;
    }
    void setvalue(int a)//��Ȧs�Jprotected
    {
        radius=a;
    }
protected:
    int height;
    int width;
    int radius;
};
class triangle: public base//�l���O
{
    public:
        int area()
        {
            return (height*width)/2;//�^��
        }
};
class circle: public base//�l���O
{
    public:
        int area()
        {
            return radius*radius*pi;//�^��
        }
};
class square: public base//�l���O
{
    public:
        int area()
        {
            return height*width;//�^��
        }
};

#endif // E12-103502548_H_INCLUDED
