#ifndef AIRPLANE_H_INCLUDED
#define AIRPLANE_H_INCLUDED
#include <iostream>

#define numPlane 5

using namespace std;
class Airplane
{
    public:
    Airplane()
    {
         cout << "Create an airplane" << endl;
         count++;
    }
    Airplane(int x,int y)
    {
          cout << "Create an airplane" << endl;
        num=x;
        capacity=y;
        count++;
    }
    void show();
    int static Sum();
    void setPlane(int ,int);
    int static count;
    protected:
        int num=0;
        int capacity=0;

};
int Airplane::count=0;

void Airplane::setPlane(int x,int capa)
{
    cout << "Set number " << x << endl;
    cout << "Set carrying capacity " << capa << endl;
    capacity=capa;
    num=x;
}
void Airplane::show()
{
    cout << "Airplane Number: " << num << "; Carrying Capacity " << capacity << " t" << endl;
}
int Airplane::Sum()
{
    cout << "We have " << count << " airplane" << endl;
    return 0;
}
class Bomber: public Airplane
{
   public:
        int static count;
           int bombnum;
           Bomber()
           {
                cout << "Create a Bomber" << endl;
                count++;
           }
            Bomber(int x,int y)
            {
                cout << "Create an Bomber" << endl;
                num=x;
                capacity=y;
                count++;
            }
            void setbomb(int b)
            {
                bombnum=b;
                cout << "Set number of bomb " << b << endl;
            }
            void show()
            {
               cout << "Airplane Number: " << num << "; Carrying Capacity " << capacity << " t; Number of bomb : " << bombnum << endl;
            }
            void static Sum()
            {
                cout << "We have " << count << " Bomber" << endl;
            }
};
int Bomber::count=0;
#endif // AIRPLANE_H_INCLUDED
