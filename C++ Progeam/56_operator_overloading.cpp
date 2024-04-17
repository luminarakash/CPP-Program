//  how to add two string using plus (+) operator 
//  overaloading + operator

#include<iostream>
#include<string.h>
using namespace std;
class test
{
    char st[100];
    public:
    void read()
    {
        cout<<"enter string";
        cin>>st;
    }
    void show()
    {
        cout<<"string="<<st<<endl;
    }
    test operator + (test t2)
    {
        test t3;
        strcpy(t3.st, st);
        strcpy(t3.st, " ");
        strcpy(t3.st, t2.st);
        return t3;
    }
};

int main()
{
    test t1, t2, t3;
    t1.read();
    t2.read();
    t3=t1+t2;
    t3.show();
}