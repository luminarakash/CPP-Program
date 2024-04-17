#include<iostream>
using namespace std;
int main()
{
    int a,b;
    try
    {
        {
            cout<<"enter two number";
            cin>>a>>b;
            if(b==0)throw 0;
            cout<<"division="<<a/b;
        }
    }
    catch(int x)
    {
        cout<<"division not possible";
    }
    
}