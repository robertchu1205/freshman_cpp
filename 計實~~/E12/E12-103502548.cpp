#include "E12-103502548.h"
using namespace std;
int main()
{
    triangle t;
    circle c;
    square s;
    int a,b;
    int choose;

    do
    {
        cout << "Please choose your shape (1)triangle (2)circle (3)square  HAPPY NEW YEAR!!!" << endl;
        cin >> choose;
        if(choose==1)
        {
            cout << "Please input your width and height" << endl;
            cin >> a >> b;
            while(a<=0||b<=0)//���b�A�p��s���ɭ�
            {
                cout << "Please input your width and height" << endl;
                cin >> a >> b;
            }
            t.setvalue(a,b);//��Ȧs�Jprotected
            cout << "The area of triangle is: "<< t.area() << endl;
            cout << "HAPPY NEW YEAR!!!" << endl;
        }
        else if(choose==2)
        {
            cout << "Please input your radius" << endl;
            cin >> a;
             while(a<=0)//���b�A�p��s���ɭ�
            {
                cout << "Please input your radius" << endl;
                cin >> a;
            }
            c.setvalue(a);//��Ȧs�Jprotected
            cout << "The area of circle is: "<< c.area() << endl;
            cout << "HAPPY NEW YEAR!!!" << endl;
        }
        else if(choose==3)
        {
            cout << "Please input your width and height" << endl;
            cin >> a >> b;
             while(a<=0||b<=0)//���b�A�p��s���ɭ�
            {
                cout << "Please input your width and height" << endl;
                cin >> a >> b;
            }
            s.setvalue(a,b);//��Ȧs�Jprotected
            cout << "The area of square is: "<< s.area() << endl;
            cout << "HAPPY NEW YEAR!!!" << endl;
        }
    }
    while(choose>0&&choose<4);//choose input error �h����
    cout << "Input Error!!!  HAPPY NEW YEAR!!!" << endl;
    return 0;
}
