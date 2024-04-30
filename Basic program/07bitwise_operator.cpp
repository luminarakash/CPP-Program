#include<iostream>
using namespace std;
int main()
{
    int a=4;
    int b=6;
    // bitwise operator
    cout<<endl<<"bitwise operator :"<<endl;
    int c=a&b;
    cout<<"a&b: "<<c<<endl;
    int p=a|b;
    cout<<"a|b: "<<p<<endl;
    int q=~a;
    cout<<"~a: "<<q<<endl;
    int r=a^b;
    cout<<"a^b: "<<r<<endl;
    cout<<endl;
    
    // shift operator
    cout<<"shift oprator :"<<endl;
    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;
    cout<<(19<<1)<<endl;
    cout<<(19<<2)<<endl;
    cout<<endl;

    // increament & decrement
    cout<<"increament & decrement :"<<endl;
    int i=7;
    cout<<(++i)<<endl;
    cout<<(i++)<<endl;
    cout<<(i--)<<endl;
    cout<<(--i)<<endl;
    cout<<endl;

    int x,y=1;
    x=10;
    if(++x){
        cout<<y<<endl;
    }
    else{
        cout<<++y<<endl;
    }

}