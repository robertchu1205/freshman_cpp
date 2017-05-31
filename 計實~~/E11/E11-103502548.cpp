#include <iostream>
#include "E11-103502548.h"

using namespace std;

int main()
{

    char input_str1[100];
    char input_str2[100];
    cout << "Enter a string for string 1: ";
    cin.getline(input_str1, 100);
    a str1(input_str1);//©I¥s«Øºc¤l
    cout << "Enter a string for string 2: ";
    cin.getline(input_str2, 100);
    a str2(input_str2);//©I¥s«Øºc¤l
    cout << "string 1 is \"" << str1 << "\"" << endl;//©I¥soperator <<

    str1 = str2;//©I¥soperator =
    cout << "after operation, string 1 is \"" << str1 << "\"" << endl;//©I¥soperator <<

    return 0;
}
