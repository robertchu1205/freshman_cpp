#include <iostream>

using namespace std;
//定義變數及二維陣列
int row,item,target,sum;
long long bar[999][999];

// 計算巴斯卡三角形第某列第某個數字的值
void culculate_1 ( int &row , int &item ) // 使用 call by reference 傳回 row 和 item 的值
{
    bar[1][1] = 1; // 初始第一個數字為1
    cout<<bar[1][0];
    cout << bar[1][2];
    for ( int i = 2 ; i <= row ; i++) // 利用二維陣列計算到使用者輸入的特定列數
    {
        for ( int j = 1 ; j <= i ; j++ )
        {
            bar[i][j] = bar[i-1][j-1] + bar[i-1][j]; // 第某列第某個數字的計算公式
            if ( i == row && j == item )
            {
                break;    // 計算到指定列數及個數停止
            }
        }
    }
}
//計算巴斯卡三角形第某列第某個數字前,超過目標數字的數值總合,並列出巴斯卡三角形
void culculate_2 ( int &row , int &item , int target , int &sum )
{
    int a,b;
    sum = 1; // 設定總合至少為1
    bar[1][1] = 1; // 初始第一個數字為1
    for ( row = 2 ; ; row++ ) // 列數從第二列開始,不斷遞增直到數值總和大於目標數字
    {
        for ( item = 1 ; item <= row ; item++ )
        {
            if ( target <= 1 ) // 如果目標數字是1或0,則列數只有1
            {
                row = 1;
                break;
            }
            else
            {
                bar[row][item] =  bar[row-1][item-1] + bar[row-1][item]; // 計算巴斯卡三角形數值的公式
                sum += bar[row][item]; // 每計算好一個值就加進總和
                if ( sum >= target )
                {
                    break;    // 如果總和大於目標數字,則跳出迴圈
                }
            }
        }
        if ( sum >= target )
        {
            break;    // 如果總和大於目標數字,則跳出迴圈
        }
    }
    for ( a = 1 ; a <= row ; a++ ) // 列印巴斯卡三角形
    {
        for ( b = 1 ; b <= a ; b++ )
        {
            cout << bar[a][b] << " ";
            if ( a == row && b == item )
            {
                break;    // 到特定列數及個數停止列印
            }
        }
        cout << endl; // 每列數字列印完則換行
    }
}

int main()
{
    int option;
    cout << "(1)Find Pascal Value\n(2)Find Sum over Pascal" << endl;

    for ( int i = 1 ; ; i++ )
    {
        cout << "Select: ";
        cin >> option;
        if ( option < 1 || option > 2 ) // 防呆
        {
            cout << "Wrong selection, try again" << endl;
        }
        else // 輸入正確則跳出迴圈
        {
            break;
        }
    }
    if ( option == 1 ) // 選擇選項1
    {
        for ( int i = 1 ; ; i++ )
        {
            cout << "Input Row and Item: ";
            cin >> row >> item;

            if ( row <= 0 || item <= 0 || item > row ) // 防呆
            {
                cout << "Input error! try again" << endl;
            }
            else // 輸入正確則跳出迴圈
            {
                break;
            }
        }
        culculate_1 ( row , item ); // 呼叫計算函式
        cout << "The value of Pascal(" << row << ", " << item << ") is: " << bar[row][item]; // 列印目標值
    }
    if ( option == 2 ) // 選擇選項2
    {
        for ( int i = 1 ; ; i++ )
        {
            cout << "Input a target number: ";
            cin >> target;
            if ( target < 0 ) // 防呆
            {
                cout << "Input error! try again" << endl;
            }
            else // 輸入正確則跳出迴圈
            {
                break;
            }
        }
        culculate_2 ( row , item , target , sum ); // 呼叫計算函式
        cout << "\nrow= " << row << ", num= " << item << endl;
        cout << "sum= " << sum;
    }
    return 0;
}
