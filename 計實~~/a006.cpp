#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a[3],b[3],c[3];
    for(int i=0;i<3;i++)
    {
        cin >> a[i] >> b[i] >> c[i];
        cout << endl;
    }
     for(int i=0;i<3;i++)
    {
        if(a[i]!=0)
        {

        double d=pow(b[i],2)-4*a[i]*c[i];
        double D=sqrt(d);
        double A=2*a[i];
        int A1=(-b[i]+D)/A;
        int A2=(-b[i]-D)/A;
        int A3=-b[i]/A;
        if(d>0) {
            cout << "Two different roots x1=" << A1 << " , x2=" << A2 << endl;
        }
        else if(d<0) { cout << "No real root" << endl; }
        else { cout << "Two same roots x=" << A3 << endl; }
        }
    }
    return 0;
}
