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
            position://�����J����
            cout << "Input Button Position(x1,x2,y1,y2): ";
            cin >> b.x1 >> b.x2 >> b.y1 >> b.y2;
            if((b.x1%2==0)||(b.x2%2==0)||(b.y1%2==0)||(b.y2%2==0))
            {
                cout << "Please enter odd number!" << endl;
                goto position;//�n�D����J
            }
            b.design();//�ഫ��o
            b.outputicon();//�L�X
            cout << endl;
        }
        else if(input==2)
        {
            if(b.x1==0&&b.x2==0&&b.y1==0&&b.y2==0)
            {
                cout << "Please design a button first!" << endl;
                goto error;//����S�����٭n����
            }
            b.rotate();//����
            b.outputicon();//�L�X
            cout << endl;
        }
        else if(input==3)
        {
            int x,y;
            if(b.x1==0&&b.x2==0&&b.y1==0&&b.y2==0)
            {
                cout << "Please design a button first!" << endl;
                goto error;//����S�����٭n����
            }
            cout << "Input 2 quantity to enlarge the X and Y" << endl;
            cout << "X: ";
            cin >> x;//x��V,��j�X��
            cout << "Y: ";
            cin >> y;//y��V,��j�X��
            b.enlarge(x,y);//��j
            b.outputicon();//�L�X
            cout << endl;
        }
        else if(input<1||input>4)
        {
            cout << "error!" << endl;
            goto error;//input���~�n�D����J
        }
    }
    cout << "Done editing!" << endl;
        return 0;
}
