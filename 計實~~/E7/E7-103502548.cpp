#include <iostream>
#include <cstdlib>
using namespace std;
void echo(char*);
int num;
int main()
{
    char str[100];//�r��}�C
    cout << "Input a string: ";
    cin.getline(str,100);//�r�ꤤ�C�Ӧr���ഫ���r���}�C�ÿ�J
    int i=0;//���J�r�ꪺ�r����num
    while(str[i]!='\0')
    {
        i++;
    }
    num=i;
    echo(str);//�I�s�I����echo
    return 0;
}
void echo(char *str)
{

    for(int i=1;i<=num;i++)//�C����X�A���q�U�@��}�l�L
    {
        for(int j=i;j<=num-1;j++)
        {
            cout << str[j];
        }
           cout << endl;
    }
}
