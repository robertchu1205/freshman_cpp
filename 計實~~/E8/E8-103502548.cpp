#include <iostream>
using namespace std;

class student{//�ŧiCLASS�Ѽ�
public:
       int sn;//�ǥͼ�
       int choose=1;
       int score[100];//�C�쪺����
       double average(int *);
       void sorting(int *,int *);
       int counts[100];//�y��
};

int main()
{
    student t;//�����ŧi�A�����t.
    step1://���b�A�H�Ƥ��b�d��
    cout << "Please Input Student's Number (1~100) : ";
    cin >> t.sn;
    if(t.sn>100||t.sn<1)
    {
        cout << "Input Error!!\n";//���~
        goto step1;
    }
    cout << endl;
    cout << "Input Each Student's Score\n";
    for(int i=1;i<=t.sn;i++)
    {
        step2://���b�A�u�n�Y��ǥͦ��Z�W�X�d��A�n�D����J
        cout << "student " << i << ": ";
        cin >> t.score[i-1];
        t.counts[i-1]=i;//�ǥͮy��
        if(t.score[i-1]<0||t.score[i-1]>100)
        {
            cout << "Input Error\n!!";//���~
            goto step2;
        }
    }
    while(t.choose==1||t.choose==2)//�L���^��A���3�hbreak
    {
    step3://���b�A�ﶵ�W�X�d��
    cout << "(1) Average (2) Sorting (from highest to lowest score) (3)Break\n";
    cout << "Choose function (1)or(2)or(3): ";
    cin >> t.choose;
    if(t.choose>3||t.choose<1)
    {
        cout << "Input Error!!\n";//���~
        goto step3;
    }
    else if(t.choose==1)
    {
        cout << "Total average: " << t.average(t.score) << endl;//�ޥΰƵ{��average()
    }
    else if(t.choose==2)
    {
        t.sorting(t.score,t.score);//�ޥΰƵ{��sorting
    }
    else if(t.choose==3)
    {
        break;//����
    }
        }
    return 0;
}
double student::average(int *score)//�⥭��
{
    int sum=0;
    for(int i=0;i<sn;i++)
    {
        sum+=score[i];
    }
    return sum/sn;
}

void student::sorting(int *,int *)//�w�j�Ƨ�
{

    for(int i=0;i<sn;i++)
    {
        for(int j=i;j<sn;j++)
        {
            if(score[i]<score[j])
            {
                swap(score[i],score[j]);//������
                swap(counts[i],counts[j]);//���y��
            }
        }
    }
    for(int i=0;i<sn;i++)
    {
        cout << i+1 <<  " : " << "student" << counts[i] << endl;//��X�ƦW���ǥͮy��
    }
}
