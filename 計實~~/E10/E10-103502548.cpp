#include<iostream>
#include "E10-103502548.h"

int main()
{
    cout<<"step 1:"<<endl<<endl;

    A a1,a2,*a;//�s�W�Fa1.a2�ƻsA��class

    cout<<"\nstep 2:"<<endl<<endl;
    setValue(a1,20);//��20��i_value
    a1.printout();//�L�X��i��20
    cout<<"\nstep 3:"<<endl<<endl;

    B b;
    b.set();//�~��]constructnum
    cout<< "b.x = "<< b.get()<< endl;//�L�X�{�b��construstnum

    cout<<"\nstep 4:"<<endl<<endl;
    a = new A;
    b.set();//�~��]constructnum

    cout<< "number of constructed class A = ";

    cout<< A::constructNum<< endl;
    cout<< "number of destructed class A = ";
    cout<< a1.getDestructorNum()<< endl;
    cout<< "b.x = "<< b.get()<< endl;
    cout<<"\nstep 5:"<<endl<<endl;
    delete a;//�I�s~A()
    cout<< "number of constructed class A = ";

    cout<< A::constructNum<< endl;//�L�X�w�constructNum
    cout<< "number of destructed class A = ";
    cout<< a1.getDestructorNum()<< endl;//�L�X�w�[��destructnum
    cout<<"\nstep 6:"<<endl;//�L~B().~A()
}
