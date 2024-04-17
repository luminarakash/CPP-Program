//  exception handling width the class
#include<iostream>
using namespace std;
class test
{
    public:
    test()
    {
        cout<<"i am constructor\n";
    }
    ~test()
    {
        cout<<"i am destructor\n";
    }
};
int main()
{
    try
    {
        cout<<"exception handling";
        test t;
        throw 10;
        cout<<"testing destructor";
    }
    catch(int x)
    {
        cout<<"thanks";
    }
}