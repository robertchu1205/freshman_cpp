#include <iostream>
#include "Fraction.h"

using namespace std;

int main()
{
    Fraction fraction(0, 0);
    Fraction target(0, 0);
    bool loop = true;
    while (loop == true)
    {
        int selection = 0;
        do//do while用來防呆,假如selection超出範圍,則會要求重輸入
        {
            cout << "current fraction is: " << fraction << endl;
            cout << "(1)assign new fraction" << endl;
            cout << "(2)add a fraction or an integer" << endl;
            cout << "(3)multiply a fraction or an integer" << endl;
            cout << "(4)QUIT" << endl;
            cout << "Choose an option: ";
            cin >> selection;
        }
        while(selection < 1 || selection > 4);

        switch(selection)
        {
        case 1:
            do
            {
                cout << "enter a legal fraction: ";
                char input_string[100] = {0};
                cin.sync();//清除空間
                cin.getline(input_string, 100);//存入陣列
                fraction.setFraction(input_string);
            }
            while(!fraction.islegal()); //錯誤則要求重輸入
            break;
        case 2:
            if (!fraction.islegal())
            {
                cout << "fraction not assigned" << endl;
                break;
            }
            do
            {
                cout << "enter a fraction or an integer to be added: ";
                char input_string[100] = {0};
                cin.sync();//清除空間
                cin.getline(input_string, 100);//存入陣列
                target.setFraction(input_string);
            }
            while(!target.islegal()); //false就重輸入
            fraction = fraction + target;
            break;
        case 3:
            if (!fraction.islegal())
            {
                cout << "fraction not assigned" << endl;
                break;
            }
            do
            {
                cout << "enter a fraction or an integer to be multiplied: ";
                char input_string[100] = {0};
                cin.sync();//清除空間
                cin >> input_string;
                target.setFraction(input_string);//false就重輸入
            }
            while(!target.islegal());
            fraction * target;
            break;
        case 4:
            loop = false;
            break;
        default:
            break;
        }
        cout << endl;
    }
    return 0;
}
