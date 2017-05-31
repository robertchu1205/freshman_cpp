#include <iostream>
using namespace std;

int main()
{
        int a;
        while(1)
        {
                cin>>a;
                if(cin.fail()) return 0;        //条件可改写为cin.fail()
                {
                        cout<<"輸入有錯 請重新輸入"<<endl;
                     //  cin.clear();
                       // cin.sync();   //清空流

                }
                else
                {
                        cout<<a;
                        break;
                }
        }
        return 0;
}
