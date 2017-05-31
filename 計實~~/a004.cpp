#include <iostream>
using namespace std;
int main()
{
    int input;
    cin >> input;
    if((input%4==0&&input%100!=0)||input%400==0)
    {
        cout << "閏年\n";
    }
    else
    {
        cout << "平年\n";
    }
    return 0;
}
