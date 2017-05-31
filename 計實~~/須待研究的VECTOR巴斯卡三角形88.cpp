#include<iostream>
#include<vector>
#include<cmath>
using  namespace std;

int pascal (int r,int i) //巴斯卡三角型
{
    vector<int> a2(r+2);//a2是第二列
    if (r==1)     //第一及第二列都是1
        a2[i]=1;
    if (r==2)
        a2[i]=1;
    if (r>2) //從第三列開始
    {
        a2[1]=1;
        a2[2]=1;
        for (int x=3;x<=r;x++)//從3到第r列
        {
            vector<int> a(r+2);
            for (int y=1;y<=x;y++)//第幾位數
            {
                a[y]=a2[y-1]+a2[y];//前一列的兩數相加
            }
            a[1]=1; //首末項都是1
            a[x]=1;
            a2=a;
        }
    }
    return a2[i];//回傳
}

void sum (int &n)
{
    int y=1,z=0,num,k=0,row=0;
    for (row;row<y;row++) //找出在哪列
    {
        y++;
        z+=pow(2,row);
        if (z>=n)
        {
            row++;
            break;
        }
    }
    int x=row;
    for (x;x>=1;x--)
    {
        if (z==n) //等大則為最後一項
        {
            num=row;
            break;
        }
        z-=pascal(row,x);//從後面開始減
         //從右開始遞減
        if (z<=n)//輸入較大
        {
            num=x;//往右補一位 不須加1
            break;
        }
    }
    if (n==1)
        cout << "1\n\n" << "row= 1, num= 1\nsum= 1";
    if (n==2)
        cout << "1\n1\n\n" << "row= 1, num= 1\nsum= 2";
    if (n==3)
        cout << "1\n1 1\n\n" << "row= 1, num= 2\nsum= 3";
    if (row>2) //從第三列開始
    {
        cout << "1\n1 1\n";
        for (int i=3;i<=row-1;i++) //第幾列
        {
            for (int j=1;j<=i;j++) //第幾位數
            {
                k+=pascal (i,j);
                cout << pascal (i,j) << " ";
            }
            cout << "\n";
        }
        for (int p=1;p<=num;p++) //最後一列
        {
            k+=pascal (row,p);
            cout << pascal (row,p) <<  " ";
        }
        cout << "\n\nrow= " << row << ", num= " << num << "\nsum= " << k+3;
    }
}

int main()
{
    int s,r,i;
    cout << "(1)Find Pascal Value\n(2)Find Sum over Pascal\nSelect: ";
    while(1) //防呆
    {
        cin >> s;
        if (s!=1&&s!=2)
            cout << "Wrong selection, try again\nSelect: ";
        else
            break;
    }
    if (s==1)
    {
        while(1)
        {
            cout << "Input Row and Item: ";
            cin >> r >> i;
            if (i>r) //防呆 第幾列的第幾個數字不會大於列
                cout << "Input error! try again\n";
            else if (r<=0||i<=0) //防呆 不可小於0
                cout << "Input error! try again\n";
            else
                break;
        }
        cout << "The value of Pascal(" << r << ", " << i << ") is: " << pascal (r,i);
    }
    if (s==2)
    {
        int n;
        while(1)
        {
            cout << "Input a target number: ";
            cin >> n;
            if (n<=0) //數字不可小於等於0
                cout << "Input error! try again\n";
            else
                break;
        }
        sum (n);
    }
    return 0;
}
