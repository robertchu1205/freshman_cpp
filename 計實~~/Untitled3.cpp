#include<iostream>

int main()
{
// variable declarations
float x, y, z, answer;
int item; //item in range 1~3

std::cout << "Please enter x, y and z! \n"; //prompt user to assign value for x, y and z
std::cin >> x >> y >> z; //read three float from user into x, y and z

std::cout << "\nChoose one problem! (1-3)\n"; //prompt user to choose one problem

//list three problem
std::cout << "(1) Sum of x, y and z = ?\n";
std::cout << "(2) Mean of x, y and z = ?\n";
std::cout << "(3) (2x-y+2z)^2 = ?\n\n";

std::cin >>item; //read integer from user into item

//solve problem
if (item==1)
answer= x+y+z;
if (item==2)
answer= (x+y+z)/3;
if (item==3)
answer= (2*x-y+2*z)*(2*x-y+2*z);

std::cout << "\nAnswer: " << answer << std::endl; // display answer

return 0;
}
