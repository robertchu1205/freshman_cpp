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
MyButton::MyButton()//建構子
{
    cout << "Original Screen\n";//印出原始圖形
    setoriginal();
    outputicon();
    cout << endl;
}
void MyButton::setoriginal()//建立原始圖形之陣列
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
   if(x1>x2) { swap(x1,x2); }//防呆,防止x1>x2
   if(y1>y2) { swap(y1,y2); }//防呆,防止y1>y2

    for(int j=y1;j<=y2;j++)//輸入之區域內換成o
    {
        for(int i=x1;i<=x2;i++)
       {
           icon[j][i]='o';
       }
    }
}
void MyButton::outputicon()//印出圖形支副程式
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
int MyButton::mid(int x,int y)//中點副程式
{
    return (x+y)/2;
}
void MyButton::rotate()
{
    if(x1>x2) { swap(x1,x2); }//防呆,防止x1>x2
    if(y1>y2) { swap(y1,y2); }//防呆,防止y1>y2
    int x=(y2-y1)/2;//中央點向左右延伸的值
    int y=(x2-x1)/2;//中央點向上下延伸的值
    int mx=mid(x1,x2);//中央點的x
    int my=mid(y1,y2);//中央點的y
    x1=mx-x;//中央點向左延伸的值
    x2=mx+x;//中央點向右延伸的值
    y1=my-y;//中央點向上延伸的值
    y2=my+y;//中央點向下延伸的值
    if(y1<0) { y1=0; }//超出邊界從0開始存
    if(x1<0) { x1=0; }//超出邊界從0開始存
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
    if(x1>x2) { swap(x1,x2); }//防呆,防止x1>x2
    if(y1>y2) { swap(y1,y2); }//防呆,防止y1>y2
    x2=x2+((x2-x1+1)*(x-1));//x2+放大所要加的值
    y2=y2+((y2-y1+1)*(y-1));//y2+放大所要加的值
        for(int j=y1;j<=y2;j++)//轉換為o
    {
        for(int i=x1;i<=x2;i++)
       {
           icon[j][i]='o';
       }
    }
}
