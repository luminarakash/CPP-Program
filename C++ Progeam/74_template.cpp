#include<iostream>
using namespace std;
template <class t>
t sum(t a[], int size)
{
    t s=0;
    for(int i=0; i<=size; i++)
    {
        s=s+a[i];
    }
    return s;
}
int main()
{
    int x[5]={10,20,30,40,50};
    float y[3]={1.1,2.2,3.3};
    cout<<"int array element sum="<<sum(x,5)<<endl;
    cout<<"float array element sum="<<sum(y,3)<<endl;
}