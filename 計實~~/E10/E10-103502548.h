#include <iostream>
using namespace std;
class A
{
public:

 A();
 ~A();

    friend int setValue (A &,int );//friend才能動private的值

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
int A::constructNum=0;//在外面宣告private中的值
int A::destructNum=0;//在外面宣告private中的值
A::A()
{
    cout << "A construct" << constructNum << ":start" << endl;
    A::constructNum++;//用到建構子constructnum要++
}
A::~A()
{
   cout << "A destruct " << destructNum << ":end" << endl;
   constructNum--;//用到解構子,constructnum要--
    destructNum++;//用到解構子,destructnum要++
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
    x=A::constructNum;//存A的constructnum
}
int B::get()
{
    return x;//回傳private的x
}
int A::getDestructorNum()
{
    return destructNum;
}
