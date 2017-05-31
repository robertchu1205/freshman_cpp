#include <iostream>
#include <cstdlib>
using namespace std;
void echo(char*);
int num;
int main()
{
    char str[100];//字串陣列
    cout << "Input a string: ";
    cin.getline(str,100);//字串中每個字元轉換成字元陣列並輸入
    int i=0;//算輸入字串的字元數num
    while(str[i]!='\0')
    {
        i++;
    }
    num=i;
    echo(str);//呼叫富城市echo
    return 0;
}
void echo(char *str)
{

    for(int i=1;i<=num;i++)//每次輸出，都從下一位開始印
    {
        for(int j=i;j<=num-1;j++)
        {
            cout << str[j];
        }
           cout << endl;
    }
}
