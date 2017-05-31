#include <iostream>
using namespace std;
class MyButton
{

public:
    MyButton();
    ~MyButton();
    int mid(int ,int);
    void outputicon();
    void setoriginal();
    void design();
    void rotate();
    void enlarge(int ,int );
    int x1=0,x2=0,y1=0,y2=0;
private:
    char icon[20][40];
};
MyButton::MyButton()//�غc�l
{
    cout << "Original Screen\n";//�L�X��l�ϧ�
    setoriginal();
    outputicon();
    cout << endl;
}
void MyButton::setoriginal()//�إ߭�l�ϧΤ��}�C
{
    for(int i=0;i<20;i++)
    {
        icon[i][0]='|';
        for(int j=1;j<39;j++)
        {
            icon[i][j]='-';
        }
        icon[i][39]='|';
    }
}
MyButton::~MyButton()
{

}
void MyButton::design()
{
    setoriginal();
   if(x1>x2) { swap(x1,x2); }//���b,����x1>x2
   if(y1>y2) { swap(y1,y2); }//���b,����y1>y2

    for(int j=y1;j<=y2;j++)//��J���ϰ줺����o
    {
        for(int i=x1;i<=x2;i++)
       {
           icon[j][i]='o';
       }
    }
}
void MyButton::outputicon()//�L�X�ϧΤ�Ƶ{��
{
    for(int i=0;i<20;i++)
            {
                for(int j=0;j<40;j++)
                {
                    cout << icon[i][j];
                }
                cout << endl;
            }
}
int MyButton::mid(int x,int y)//���I�Ƶ{��
{
    return (x+y)/2;
}
void MyButton::rotate()
{
    if(x1>x2) { swap(x1,x2); }//���b,����x1>x2
    if(y1>y2) { swap(y1,y2); }//���b,����y1>y2
    int x=(y2-y1)/2;//�����I�V���k��������
    int y=(x2-x1)/2;//�����I�V�W�U��������
    int mx=mid(x1,x2);//�����I��x
    int my=mid(y1,y2);//�����I��y
    x1=mx-x;//�����I�V����������
    x2=mx+x;//�����I�V�k��������
    y1=my-y;//�����I�V�W��������
    y2=my+y;//�����I�V�U��������
    if(y1<0) { y1=0; }//�W�X��ɱq0�}�l�s
    if(x1<0) { x1=0; }//�W�X��ɱq0�}�l�s
    setoriginal();
       for(int j=y1;j<=y2;j++)
    {
        for(int i=x1;i<=x2;i++)
       {
           icon[j][i]='o';
       }
    }
}
void MyButton::enlarge(int x,int y)
{
    if(x1>x2) { swap(x1,x2); }//���b,����x1>x2
    if(y1>y2) { swap(y1,y2); }//���b,����y1>y2
    x2=x2+((x2-x1+1)*(x-1));//x2+��j�ҭn�[����
    y2=y2+((y2-y1+1)*(y-1));//y2+��j�ҭn�[����
        for(int j=y1;j<=y2;j++)//�ഫ��o
    {
        for(int i=x1;i<=x2;i++)
       {
           icon[j][i]='o';
       }
    }
}
