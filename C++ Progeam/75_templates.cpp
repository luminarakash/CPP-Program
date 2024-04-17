#include<iostream>
using namespace std;
template <class t>
t sum(t a, t b)
{
    returm a+b;
}
template <class t>
t sum(t a,t b,t c)
{
    returm a+b+c;
}

int main()
{
    cout<<"two int sum="<<sum(10,20)<<endl;
    cout<<"two float sum="<<sum(10.5,20.8)<<endl;
    cout<<"three int sum="<<sum(10,20,30)<<endl;
    cout<<"three float sum="<<sum(10.5,20.8,30.5)<<endl;
}