#ifndef E11-103502548_H_INCLUDED
#define E11-103502548_H_INCLUDED

#include <string.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
class a
{

    friend ostream &operator<<(ostream &, a &);//<<��operator
public:

    a (string);//�غc�l
    string a_str;//�r��
    a &operator=(a & );//=��operator
};
a::a(string str)
{
    a_str=str;
}

ostream &operator<<(ostream &output, a &A)
{
    output << A.a_str;//�L�X
    return output;
}
a &a::operator=(a &A)
{
    a_str=A.a_str;
}

#endif // E11-103502548_H_INCLUDED
