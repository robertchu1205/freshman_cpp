#include<iostream>
#include<vector>
#include<cmath>
using  namespace std;

int pascal (int r,int i) //�ڴ��d�T����
{
    vector<int> a2(r+2);//a2�O�ĤG�C
    if (r==1)     //�Ĥ@�βĤG�C���O1
        a2[i]=1;
    if (r==2)
        a2[i]=1;
    if (r>2) //�q�ĤT�C�}�l
    {
        a2[1]=1;
        a2[2]=1;
        for (int x=3;x<=r;x++)//�q3���r�C
        {
            vector<int> a(r+2);
            for (int y=1;y<=x;y++)//�ĴX���
            {
                a[y]=a2[y-1]+a2[y];//�e�@�C����Ƭۥ[
            }
            a[1]=1; //���������O1
            a[x]=1;
            a2=a;
        }
    }
    return a2[i];//�^��
}

void sum (int &n)
{
    int y=1,z=0,num,k=0,row=0;
    for (row;row<y;row++) //��X�b���C
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
        if (z==n) //���j�h���̫�@��
        {
            num=row;
            break;
        }
        z-=pascal(row,x);//�q�᭱�}�l��
         //�q�k�}�l����
        if (z<=n)//��J���j
        {
            num=x;//���k�ɤ@�� �����[1
            break;
        }
    }
    if (n==1)
        cout << "1\n\n" << "row= 1, num= 1\nsum= 1";
    if (n==2)
        cout << "1\n1\n\n" << "row= 1, num= 1\nsum= 2";
    if (n==3)
        cout << "1\n1 1\n\n" << "row= 1, num= 2\nsum= 3";
    if (row>2) //�q�ĤT�C�}�l
    {
        cout << "1\n1 1\n";
        for (int i=3;i<=row-1;i++) //�ĴX�C
        {
            for (int j=1;j<=i;j++) //�ĴX���
            {
                k+=pascal (i,j);
                cout << pascal (i,j) << " ";
            }
            cout << "\n";
        }
        for (int p=1;p<=num;p++) //�̫�@�C
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
    while(1) //���b
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
            if (i>r) //���b �ĴX�C���ĴX�ӼƦr���|�j��C
                cout << "Input error! try again\n";
            else if (r<=0||i<=0) //���b ���i�p��0
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
            if (n<=0) //�Ʀr���i�p�󵥩�0
                cout << "Input error! try again\n";
            else
                break;
        }
        sum (n);
    }
    return 0;
}
