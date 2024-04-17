#include<iostream>
using namespace std;
temp <class t>
class test
{
    t a,b;
    public:
    void get()  //def
    {
        cin>>a>>b;
    }
    t sum();  //dec
};

template <class t>  //def
t test<t>::sum()
{
    return a+b;
}

int main()
{
    test<int>t1;
    test<float>t2;
    cout<<"enter two integer"<<endl;
    t1.get();
    cout<<"sum="<<t1.sum()<<endl;
    cout<<"enter two float"<<endl;
    t2.get();
    cout<<"sum="<<t2.sum();
}