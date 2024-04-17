//  overloading ==operator
#include<iostream>
using namespace std;
class test
{
    int a;
    public:
    void get()
    {
        cin>>a;
    }
    void operator == (test t2)
    {
        if (a==t2.a) cout<<"object are equal";
        else cout<<"object are not equal";
    }
};

int main()
{
    test t1,t2;
    cout<<"enter t1 object a value";
    t1.get();
    cout<<"enter t2 object a value";
    t2.get();
    t1==t2;  //calling fun
}