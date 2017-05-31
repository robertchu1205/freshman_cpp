#include <iostream>
using namespace std;
class A
{
public:

 A();
 ~A();

    friend int setValue (A &,int );//friend�~���private����

    void printout()const;//2

    static int constructNum;//1.4.5

    int getDestructorNum();//4.5

private:

    int _value;//2

    static int destructNum;
};
class B
{
public:

    B();
    ~B();
    void set();//3.4

    int get();//3.4

private:

     int x;
};
int A::constructNum=0;//�b�~���ŧiprivate������
int A::destructNum=0;//�b�~���ŧiprivate������
A::A()
{
    cout << "A construct" << constructNum << ":start" << endl;
    A::constructNum++;//�Ψ�غc�lconstructnum�n++
}
A::~A()
{
   cout << "A destruct " << destructNum << ":end" << endl;
   constructNum--;//�Ψ�Ѻc�l,constructnum�n--
    destructNum++;//�Ψ�Ѻc�l,destructnum�n++
}
B::B()
{
    cout << "B construct" << endl;
}
B::~B()
{
    cout << "B destruct\n";
}
int setValue (A &a,int x)
{
    a._value=x;
}
void A::printout() const
{
    cout << "_value=" << _value << endl;
}
void B::set()
{
    x=A::constructNum;//�sA��constructnum
}
int B::get()
{
    return x;//�^��private��x
}
int A::getDestructorNum()
{
    return destructNum;
}
