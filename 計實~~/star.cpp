#include<iostream>
using namespace std;
int main()
{
    string star;
    star="*";
    string star_s;
    star_s="* ";
    int in1=0;
    int in2=0;
    cout << "input:";
    cin >> in1 >> in2;
    if(in1==1)
    {
        for(int i=0;i<in2;i++)
        {
            int d_in2=in2*2;
            if(i==0) {

                    for(int j=0;j<d_in2;j++) {
                    cout << star;}
                    cout << endl; }
                    else if(i!=0)
                    {
                        for(int y=1;y<=d_in2;y++)
                        if(y==i+1||y==d_in2-i) {
                            cout << star;
                        }
                        else {
                            cout << " ";
                        }

                        cout << endl;
                    }

        }
     for(int i=in2;i>0;i--)
        {
            int d_in2=in2*2;
            if(i==1) {

                    for(int j=0;j<d_in2;j++) {
                    cout << star;}
                    cout << endl; }
                    else if(i!=1)
                    {
                        int ii=i-1;
                        for(int y=1;y<=d_in2;y++)
                        if(y==i||y==d_in2-ii) {
                            cout << star;
                        }
                        else {
                            cout << " ";
                        }

                        cout << endl;
                    }

        }
    }
    else if(in1==2)
    {
        int tri_in2=3*in2;
        int tri_in2_p=3*in2+1;
        int xxx;
        int yyy;
        for(int i=1;i<=in2;i++) {
            for(int j=0;j<tri_in2;j++) {
                cout << " ";
            }
            for(int x=0;x<i;x++) {
                cout << star_s;
            }
            tri_in2--;
            yyy=tri_in2;
            cout << endl;
        }
        /*********************/
        for(int j=1;j<=in2;j++) {
        for(int i=0;i<tri_in2_p;i++) {
            cout << star_s;
        }
        tri_in2_p--;
        xxx=tri_in2_p;
        cout<<endl;
        for(int x=0;x<j;x++) {cout<<" ";}
        }
        /********************************/
      for(int i=0;i<xxx;i++) {
        cout << star_s;
      }
      cout << endl;
      /***********************************/
      for(int j=in2;j>0;j--) {
            xxx++;
      for(int x=1;x<j;x++) {cout<<" ";}
        for(int i=0;i<xxx;i++) {
            cout << star_s;
        }
        cout<<endl; }
        for(int i=in2;i>0;i--) {
            for(int j=0;j<yyy;j++) {
                cout << " ";
            }
            for(int x=0;x<i;x++) {
                cout << star_s;
            }
            yyy++;
            cout << endl;
        }

    }

    return 0;
}
