#include<iostream>
using namespace std;

int main(){
    int num=5;
    int a=num;

    a++;
    cout<<num<<endl;
    int *p=&num;
    cout<<"before: "<<num<<endl;
    (*p)++;
    cout<<"after: "<<num<<endl;
    cout<<endl;

    //copying a pointer
    int *q=p;
    cout<<p<<" "<<q<<endl;
    cout<<*p<<" "<<*q<<endl;
    cout<<endl;

    //impotant concept
    int i=3;
    int *t=&i;

    *t=*t+1;
    cout<<*t<<endl;
    cout<<"befor t: "<<t<<endl;
    cout<<"after t: "<<t<<endl;

    return 0;
}