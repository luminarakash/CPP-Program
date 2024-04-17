#include<iostream>
using namespace std;

class tast
{
    public:
    static int a; //dec
    void get()
    {
        cout<<"a="<<a<<endl;
    }
};

int test::a=10;

int main()
{
    test::a=100;
    cout<<"a="<<test::a<<endl;
    test t;
    t.get();
}