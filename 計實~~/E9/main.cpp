#include "SecretSystem.h"
#include "SecretSystem.cpp"

#define MAX 100//定義MAX是100

using namespace std;
int main()
{
    Encrypt s;
    char en[MAX];
    int de[MAX];
    int key;
    int choose;
reput:
    cout << "Please choose (1)Encrypt (2)Decrypt or (3)break : ";
    cin >> choose;
    while (choose!=3)//選擇3,break
    {

        if(choose>3||choose<1)
        {
            cout << "Input error!!!" << endl;
            goto reput;//防呆,重輸入
        }
        else if(choose==1)
        {
            cout << "Input your string for encoding:" << endl;
            cin.ignore();//清掉,因為前面有cin了,cin.getline的特性
            cin.getline(en,MAX);
            cout << "Input your key: ";
            cin >> key;
            s.setkey(key);
            cout << "Encrypt code are: ";
            s.startEncrypt(en);//呼叫副程式
            cout << endl;
            goto reput;
        }
        else if(choose==2)
        {
            bool debug=1;//除錯,加key後超出範圍
            cout << "Input your string for decoding: (-1 = end) " << endl;
            //cin.ignore();
            for(int i=0; ; i++)
            {
                cin >> de[i];
                if(de[i]==-1)
                {
                    break;//存入,遇到-1,break
                }
            }
            cout << "Input your key: ";
            cin >> key;
            s.setkey(key);

            cout << "Decrypt code are: ";
            for(int i=0;de[i]!=-1 ; i++)
            {

                    if( de[i]+key<32||de[i]+key>126)
                    {
                        cout << "decode input error!" << endl;
                        debug=0;
                        break;//防呆
                    }

            }
            if(debug==1)
            {

                s.startDecrypt(de);//呼叫副程式
                cout << endl;
            }
            goto reput;
        }
    }
    return 0;
}
