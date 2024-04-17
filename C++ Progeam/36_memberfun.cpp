// member function with argument and return values

#include<iostream>
using namespace std;
class test
{
    int a,b;
    public:
    void readdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void showdata()
    {
        cout<<"a="<<endl;
        cout<<"b="<<endl;
    }
    int big()
    {
        if(a>b)
        return a;
        else
        return b;
    }
};

int main()
{
    test t; //obj
    t.readdata(10,7);
    t.showdata();
    int max=t.big();
    cout<<max<<"is big";
}