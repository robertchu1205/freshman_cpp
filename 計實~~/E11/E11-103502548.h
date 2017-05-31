#ifndef E11-103502548_H_INCLUDED
#define E11-103502548_H_INCLUDED

#include <string.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
class a
{

    friend ostream &operator<<(ostream &, a &);//<<的operator
public:

    a (string);//建構子
    string a_str;//字串
    a &operator=(a & );//=的operator
};
a::a(string str)
{
    a_str=str;
}

ostream &operator<<(ostream &output, a &A)
{
    output << A.a_str;//印出
    return output;
}
a &a::operator=(a &A)
{
    a_str=A.a_str;
}

#endif // E11-103502548_H_INCLUDED
