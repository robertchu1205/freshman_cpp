#include <iostream>
using namespace std;
int main()
{
    int time;
    cin >> time;
    int ch[100]={0};
    int t1[100]={0};
    int t2[100]={0};
    for(int i=0;i<time;i++)
    {
        reput:
        cin >> ch[i] >> t1[i] >> t2[i];
        if(ch[i]>4||ch[i]<1) { goto reput; }
    }
    for(int i=0;i<time;i++)
    {
        if(ch[i]==1) { cout << t1[i]+t2[i] << endl; }
        else if(ch[i]==2) { cout << t1[i]-t2[i] << endl; }
        else if(ch[i]==3) { cout << t1[i]*t2[i] << endl; }
        else if(ch[i]==4) { cout << t1[i]/t2[i] << endl; }
    }
    return 0;
}
