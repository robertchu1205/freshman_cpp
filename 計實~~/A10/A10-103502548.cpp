#include "A10-103502548.h"
int main()
{
    MyButton b;
    int input=0;
    cout << "Please add a new button" << endl;
    while(input!=4)
    {
        error:

        cout << "(1)Design Button (2)Rotate Button (3)Enlarge Button (4)Done" << endl;
        cout << "Input: ";
        cin >> input;
        if(input==1)
        {
            position://防止輸入偶數
            cout << "Input Button Position(x1,x2,y1,y2): ";
            cin >> b.x1 >> b.x2 >> b.y1 >> b.y2;
            if((b.x1%2==0)||(b.x2%2==0)||(b.y1%2==0)||(b.y2%2==0))
            {
                cout << "Please enter odd number!" << endl;
                goto position;//要求重輸入
            }
            b.design();//轉換為o
            b.outputicon();//印出
            cout << endl;
        }
        else if(input==2)
        {
            if(b.x1==0&&b.x2==0&&b.y1==0&&b.y2==0)
            {
                cout << "Please design a button first!" << endl;
                goto error;//防止沒有值還要旋轉
            }
            b.rotate();//旋轉
            b.outputicon();//印出
            cout << endl;
        }
        else if(input==3)
        {
            int x,y;
            if(b.x1==0&&b.x2==0&&b.y1==0&&b.y2==0)
            {
                cout << "Please design a button first!" << endl;
                goto error;//防止沒有值還要旋轉
            }
            cout << "Input 2 quantity to enlarge the X and Y" << endl;
            cout << "X: ";
            cin >> x;//x方向,放大幾倍
            cout << "Y: ";
            cin >> y;//y方向,放大幾倍
            b.enlarge(x,y);//放大
            b.outputicon();//印出
            cout << endl;
        }
        else if(input<1||input>4)
        {
            cout << "error!" << endl;
            goto error;//input錯誤要求重輸入
        }
    }
    cout << "Done editing!" << endl;
        return 0;
}
