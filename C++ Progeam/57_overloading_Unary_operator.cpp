#include<iostream>
using namespace std;
class test
{
    int a;
    public:
    test() //def const
    {
        a=0;
    }
    void operator ++()
    {
        a++;
    }
    void operator --()
    {
        a--;
    }
    void show()
    {
        cout<<"a="<<a<<endl;
    }
};

int main()
{
    test t;
    t++;
    t.show();
    t--;
    t.show();
}