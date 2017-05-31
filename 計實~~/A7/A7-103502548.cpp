#include <iostream>
#include <cstring>
using namespace std;
/************宣告副程式***********/
void echo(char *);
void change(char *, bool (*)(char, char));
bool bigger(char , char );
bool smaller(char , char );
/*********主程式********/
int main()
{
    char str[1000]= {0}; //放字串之字元陣列
    int select;
step1:
    cout << "Input a string: ";
    cin.getline(str,1000);//輸入字串
    for(int i=0; str[i]!='\0'; i++) //偵測中文，要求重輸入
    {
        if(str[i]>255||str[i]<0)
        {
            cout << "No Chinese!!!\n";
            goto step1;
        }
    }
    cout << "1. Do you know the ECHO?\n";
    cout << "2. The bigger, the more front \n";
    cout << "3. The smaller, the more front \n";
    cout << "Choose a function(1~3): ";
    cin >> select;
    if(select!=1&&select!=2&&select!=3)//防呆選擇輸錯
    {
        cout << "Input error!!!";
    }
    else
    {
        /***************各選項呼叫副程式***********/
        if(select==1)
        {
            echo(str);
        }
        if(select==2)
        {
            change(str,bigger);
        }
        if(select==3)
        {
            change(str,smaller);
        }
    }
    return 0;
}
/**************副程式***************/
void echo(char *str)//回音副程式
{
    // cout << str << endl;//印輸入的句子
    int i=0;
    if(str[0]!=' ')//陣列的第一個字元假如不是空白，就先印一次
    {
        cout << str << endl;
        while(str[i]!='\0')//終止符號結束
        {
            if(str[i]==' ')//遇到空格，從下個字開始印
            {
                while(str[i]==' ')//看要跳過幾個空格才會遇到不是空格
                {
                    if(str[i]!=' ')
                    {
                        break;
                    }
                    i++;
                }
                for(int j=i; str[j]!='\0'; j++)
                {
                    cout << str[j];//印出
                }
                cout << endl;
            }
            i++;
        }
        cout << "\nEcho end";
    }
    else
    {
        while(str[i]!='\0')//終止符號結束
        {
            if(str[i]==' ')//遇到空格，從下個字開始印
            {
                while(str[i]==' ')//看要跳過幾個空格才會遇到不是空格
                {
                    if(str[i]!=' ')
                    {
                        break;
                    }
                    i++;
                }
                for(int j=i; str[j]!='\0'; j++)
                {
                    cout << str[j];//印出
                }
                cout << endl;
            }
            i++;
        }
        cout << "\nEcho end";
    }
}
bool bigger(char a, char b)//判斷前面是否小於後面
{
    if(a<b)
    {
        return 1;
    }
    return 0;
}
bool smaller(char a, char b)//判斷前面是否大於後面
{
    if(a>b)
    {
        return 1;
    }
    return 0;
}
void change(char *str, bool (*swp)(char, char))//2.3選項之副程式
{
    for(int i=0; str[i]!='\0'; i++) //泡沫排序
    {
        for(int j=i+1; str[j]!='\0'; j++)
        {
            if(swp(str[i],str[j])==1)//最小的跟後面全部比，從前面慢慢固定到後面
            {
                swap(str[i],str[j]);
            }
        }
    }
    cout << str;//印出
}
