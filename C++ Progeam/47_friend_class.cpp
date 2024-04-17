#include<iostream>
using namespace std;
class test1 //container class
{
    int a,b;
    public:
    friend class test2;
    void getab()
    {
        cout<<"enter a,b value";
        cin>>a>>b;
    }
};
class test2 //contained class
{
    public:
    void putab(test1 t1)
    {
        cout<<"a="<<t1.a<<endl;
        cout<<"b="<<t1.b<<endl;
    }
};
int main()
{
    test1 t1;
    test2 t2;
    t1.getab();
    t2.putab(t1);
}