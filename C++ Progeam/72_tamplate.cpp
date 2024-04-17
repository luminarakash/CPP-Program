#include<iostream>
using namespace std;
template <class t>
t sum(t a, t b)
{
    return a+b;
}
int main()
{
    cout<<"int sum="<<sum(5,9)<<endl;
    cout<<"float sum="<<float(2.2)<<endl;
}