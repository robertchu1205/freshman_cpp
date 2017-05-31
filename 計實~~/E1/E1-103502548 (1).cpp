#include <iostream>
#include <math.h>
using std::cout;
using std::cin;
using std::endl;


int main()
{
   int number;
   float weight,height;
   float bmi,height2;
   cout << "Enter your student number:";
   cin >> number;
   cout << "\n<<Hello,\"" << number << "\" !>>" <<endl;
   cout <<endl;
   cout << "Enter your height and weight!" <<endl;
   cin >> height >> weight;
   height2=height/100;
   bmi=weight/pow(height2,2);
   cout << "\nYour BMI value is: " << bmi <<endl;
   if(bmi<18.5)
   { cout << "You are too thin!"; }
   else if (bmi>=24)
   { cout << "You are too heavy!"; }
   return 0;
}


