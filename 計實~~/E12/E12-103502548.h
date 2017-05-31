#ifndef E12-103502548_H_INCLUDED
#define E12-103502548_H_INCLUDED

#include <iostream>

#define pi 3.14159//定義PI的值

using namespace std;

class base {//父類別
public:
    void setvalue(int a,int b)//把值存入protected
    {
        height=a;
        width=b;
    }
    void setvalue(int a)//把值存入protected
    {
        radius=a;
    }
protected:
    int height;
    int width;
    int radius;
};
class triangle: public base//子類別
{
    public:
        int area()
        {
            return (height*width)/2;//回傳
        }
};
class circle: public base//子類別
{
    public:
        int area()
        {
            return radius*radius*pi;//回傳
        }
};
class square: public base//子類別
{
    public:
        int area()
        {
            return height*width;//回傳
        }
};

#endif // E12-103502548_H_INCLUDED
