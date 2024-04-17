#include<iostream>
using namespace std;
template <class t1, class t2>
float sum(t1 x, t2 y)
{
    return x+y;
}
int main()
{
    cout<<"int sum="<<sum(10,20)<<endl;
     cout<<"float sum="<<sum(10.5,20.8)<<endl;
      cout<<"int float sum="<<sum(10,20.8)<<endl;
       cout<<"float int sum="<<sum(10.5,20)<<endl;
}