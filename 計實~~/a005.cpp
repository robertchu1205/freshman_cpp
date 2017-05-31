#include <iostream>
using namespace std;
int main()
{
    int time=0,i=0;

    cin >> time;
    int a[time][5]={0};
    while(i<time)
    {
        for(int j=0;j<4;j++)
        {
            int temp1[time],temp2[time],temp[time];
            cin >> a[i][j];
            a[i][1]-a[i][0]=temp1[i];
            a[i][1]/a[i][0]=temp2[i];
            if(temp1[i]==(a[i][j]-a[i][j-1]))
            {
                temp[i]=temp1[i];
                temp2[i]=0;
            }
            else if(temp2[i]==(a[i][j]/a[i][j-1]))
            {
                temp[i]=temp2[i];
                temp1[i]=0;
            }
        }
        i++;
    }
    cout << endl;
    for(int i=0;i<time;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout << a[i][j] << " ";
        }
        if(temp2[i]==0)
        {
            cout << a[i][3]+temp[i];
            cout << endl;
        }
        else if(temp1[i]==0);
        {
            cout << a[i][3]*temp[i];
            cout << endl;
        }
    }
    return 0;
}
