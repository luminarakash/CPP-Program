#include<iostream>
using namespace std;
class test
{
    int a,b;
    public:
    test() // def constructor
    {
        a=10;
        b=20;
    }
    void show()
    {
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
};
int main()
{
    test t;
    t.show();
}