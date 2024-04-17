// pointer---> it is store the address of another variable OR data type

#include<iostream>
using namespace std;

int main(){
    int a=5;
    int*b=&a;
// &--->(address of) operator
cout<<"the address of a is "<<&a<<endl;
cout<<"the address of b is "<<b<<endl;
// *---> (value at) deference operator
cout<<"the value at address b is "<<*b<<endl;
cout<<endl;


//pointer to pointer
int**c=&b;
cout<<"the addressof b is "<<&b<<endl;
cout<<"the address of b is "<<c<<endl;
cout<<"the value at address c is "<<*c<<endl;
cout<<"the value at address value at(value at(c)) is "<<**c<<endl;

return 0;
}