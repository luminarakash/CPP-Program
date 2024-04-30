#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the of n:";
    cin>>n;

    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=1; i<=n; i++){
        int nextnumber=a+b;
        cout<<nextnumber<<" ";
        a=b;
        b=nextnumber;
    }
}