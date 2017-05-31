#include<iostream>
#include "E10-103502548.h"

int main()
{
    cout<<"step 1:"<<endl<<endl;

    A a1,a2,*a;//新增了a1.a2複製A的class

    cout<<"\nstep 2:"<<endl<<endl;
    setValue(a1,20);//把20丟進_value
    a1.printout();//印出丟進的20
    cout<<"\nstep 3:"<<endl<<endl;

    B b;
    b.set();//繼續跑constructnum
    cout<< "b.x = "<< b.get()<< endl;//印出現在的construstnum

    cout<<"\nstep 4:"<<endl<<endl;
    a = new A;
    b.set();//繼續跑constructnum

    cout<< "number of constructed class A = ";

    cout<< A::constructNum<< endl;
    cout<< "number of destructed class A = ";
    cout<< a1.getDestructorNum()<< endl;
    cout<< "b.x = "<< b.get()<< endl;
    cout<<"\nstep 5:"<<endl<<endl;
    delete a;//呼叫~A()
    cout<< "number of constructed class A = ";

    cout<< A::constructNum<< endl;//印出已減的constructNum
    cout<< "number of destructed class A = ";
    cout<< a1.getDestructorNum()<< endl;//印出已加的destructnum
    cout<<"\nstep 6:"<<endl;//印~B().~A()
}
