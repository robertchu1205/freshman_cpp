#ifndef GIFTSYSTEM_H
#define GIFTSYSTEM_H
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
class Giftsystem
{
    public:
        Giftsystem();
        virtual ~Giftsystem();
        int age;
        int color;
        int select;
        void randColor()
        {
            srand(time(NULL));//¶Ã¼Æ
            color=(rand()%3)+1;//¶Ã¼Æ¸¹½X1.2.3
        }
        void printColor()
        {
            if(color==1) { cout << "Red"; }
            else if(color==2) { cout << "Green"; }
            else if(color==3) { cout << "White"; }
        }
        void exchangeGift()
        {
            if(color==1&&(age<=125&&age>=65)) { cout << "Denture"; }
            else if(color==1&&(age<65&&age>=18)) { cout << "Vitamin"; }
            else if(color==1&&(age<18&&age>=12)) { cout << "Movie ticket"; }
            else if(color==1&&(age<12&&age>=0)) { cout << "Lego"; }
            else if(color==2&&(age<=125&&age>=65)) { cout << "Pipe"; }
            else if(color==2&&(age<65&&age>=18)) { cout << "Watch"; }
            else if(color==2&&(age<18&&age>=12)) { cout << "Baseball gloves"; }
            else if(color==2&&(age<12&&age>=0)) { cout << "Toy car "; }
            else if(color==3&&(age<=125&&age>=65)) { cout << "Hair dye"; }
            else if(color==3&&(age<65&&age>=18)) { cout << "Wallet"; }
            else if(color==3&&(age<18&&age>=12)) { cout << "Ukulele"; }
            else if(color==3&&(age<12&&age>=0)) { cout << "Doraemon doll "; }
        }

    protected:
    private:
};

#endif // GIFTSYSTEM_H
