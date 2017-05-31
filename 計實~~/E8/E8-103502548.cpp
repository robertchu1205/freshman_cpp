#include <iostream>
using namespace std;

class student{//宣告CLASS參數
public:
       int sn;//學生數
       int choose=1;
       int score[100];//每位的分數
       double average(int *);
       void sorting(int *,int *);
       int counts[100];//座號
};

int main()
{
    student t;//必須宣告，之後用t.
    step1://防呆，人數不在範圍
    cout << "Please Input Student's Number (1~100) : ";
    cin >> t.sn;
    if(t.sn>100||t.sn<1)
    {
        cout << "Input Error!!\n";//錯誤
        goto step1;
    }
    cout << endl;
    cout << "Input Each Student's Score\n";
    for(int i=1;i<=t.sn;i++)
    {
        step2://防呆，只要某位學生成績超出範圍，要求重輸入
        cout << "student " << i << ": ";
        cin >> t.score[i-1];
        t.counts[i-1]=i;//學生座號
        if(t.score[i-1]<0||t.score[i-1]>100)
        {
            cout << "Input Error\n!!";//錯誤
            goto step2;
        }
    }
    while(t.choose==1||t.choose==2)//無限回圈，選擇3則break
    {
    step3://防呆，選項超出範圍
    cout << "(1) Average (2) Sorting (from highest to lowest score) (3)Break\n";
    cout << "Choose function (1)or(2)or(3): ";
    cin >> t.choose;
    if(t.choose>3||t.choose<1)
    {
        cout << "Input Error!!\n";//錯誤
        goto step3;
    }
    else if(t.choose==1)
    {
        cout << "Total average: " << t.average(t.score) << endl;//引用副程式average()
    }
    else if(t.choose==2)
    {
        t.sorting(t.score,t.score);//引用副程式sorting
    }
    else if(t.choose==3)
    {
        break;//結束
    }
        }
    return 0;
}
double student::average(int *score)//算平均
{
    int sum=0;
    for(int i=0;i<sn;i++)
    {
        sum+=score[i];
    }
    return sum/sn;
}

void student::sorting(int *,int *)//泡沫排序
{

    for(int i=0;i<sn;i++)
    {
        for(int j=i;j<sn;j++)
        {
            if(score[i]<score[j])
            {
                swap(score[i],score[j]);//換分數
                swap(counts[i],counts[j]);//換座號
            }
        }
    }
    for(int i=0;i<sn;i++)
    {
        cout << i+1 <<  " : " << "student" << counts[i] << endl;//輸出排名的學生座號
    }
}
