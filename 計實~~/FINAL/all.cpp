#include <iostream>
 using namespace std;
 class classA
 {
 public:
     classA();
    classA(const string &a,const string &b,const double &c )
    {
         firstName=a;
         lastName=b;
         weight=c;

    }
    string getFirstName() const
    {
         return firstName;
    }
    string getLastName() const
    {
        return lastName;
    }

    double getWeight() const
    {
        return weight;
    }
    void setFirstName (const string &a)
    {
        firstName=a;
    }
    void setLastName (const string &b)
    {
        lastName=b;
    }
    void setWeight(const double c)
    {
        weight=c;
    }
    void print() const
    {
       cout << "Name: " << getFirstName() << " " << getLastName() << endl;
       cout << "Weight: " << getWeight() << " kg" << endl;
    }
 private:
    string firstName;
    string lastName;
    double weight;

public:
   friend ostream &operator << (ostream &output,classA&c)
    {
       output << "Name: " << c.firstName << " " << c.lastName << endl;
    }
 };
 classA::classA(){};
 class classB:public classA
 {
   public:
       classB();
        classB(const string &a,const string &b,const double &c ):classA(a,b,c)
    {
         firstName=a;
         lastName=b;
         weight=c;
    }
       void examination()
       {
           if(weight>80)
           {
               cout << "Very Heavy!!(>80 KG)" << endl;
           }
       }
         void setFirstName (const string &a)
    {
        firstName=a;
    }
    void setLastName (const string &b)
    {
        lastName=b;
    }
    void setWeight(const double c)
    {
        weight=c;
    }
     string getFirstName() const
    {
         return firstName;
    }
    string getLastName() const
    {
        return lastName;
    }

    double getWeight() const
    {
        return weight;
    }
 };
 classB::classB(){};
 int main()
 {
     cout << "===step 1===\n";
     classA class_a("Sica", "Chang" , 74);
     class_a.print();

     cout << "\n===step2===\n";
 classB class_b("Leon", "Li" , 97);
     /*cout << "\n===step3===\n";
     cout << class_a;
     cout << class_b;*/
      return 0;
 }
