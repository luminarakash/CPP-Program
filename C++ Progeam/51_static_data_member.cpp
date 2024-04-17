#include<iostream>
using namespace std;
class test
{
    public:
    static void read(int x,int y)
    {
        if(x>y) cout<<"x is big"<<endl;
        else if(y>x) cout<<"y is big"<<endl;
        else cout<<"both are equal"<<endl;
    }
};

int main()
{
    test t1;   //object name
    t1.read(10,7);
    test::read(20,30);  //class name
    test::read(5,5);
}