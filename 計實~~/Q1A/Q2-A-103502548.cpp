#include <iostream>
#include <stdlib.h>
using namespace std;
int Sorting( int (&a)[5], int (&b)[5] )
{

    for(int i=3;i>=0;i--)
    {
        int temp=0;
        for(int j=0;j<=i;j++)
        {
            if(a[j]>a[j+1])
            {
               temp=a[j+1];
               a[j+1]=a[j];
               a[j]=temp;
            }
        }
    }
     for(int i=3;i>=0;i--)
    {
        int temp=0;
        for(int j=0;j<=i;j++)
        {
            if(b[j]<b[j+1])
            {
               temp=b[j+1];
               b[j+1]=b[j];
               b[j]=temp;
            }
        }
    }
    if(a[4]>b[0]) { return a[4]; }
    else { return b[0]; }
}
int main()
{
    int list1[5],list2[5];
    cout << "List 1:\n";
    cin >> list1[0] >> list1[1] >> list1[2] >> list1[3] >> list1[4];
    cout << "List 2:\n";
    cin >> list2[0] >> list2[1] >> list2[2] >> list2[3] >> list2[4];
    cout << "Maximum: " << Sorting(list1,list2) << endl;
    cout << "List 1 (increase): " << list1[0] << " ";
    cout << list1[1] << " " << list1[2] << " " << list1[3] << " " << list1[4] << endl;
    cout << "List 2 (decrease): " << list2[0] << " ";
    cout << list2[1] << " " << list2[2] << " " << list2[3] << " " << list2[4] << endl;
    system("Pause");
    return 0;
}
