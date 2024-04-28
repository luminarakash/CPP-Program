#include<iostream>
using namespace std;

int main(){

int num=5;
cout<<num<<endl;
cout<<"Address of num is: "<<&num<<endl;
int *ptr=&num;
cout<<"Address is: "<<ptr<<endl;
cout<<"value is: "<<*ptr<<endl;
cout<<endl;

double d=4.3;
double *p2=&d;
cout<<"Address is: "<<ptr<<endl;
cout<<"value is: "<<*p2<<endl;
cout<<endl;

cout<<"size of integer is: "<<sizeof(num)<<endl;
cout<<"size of pointer is: "<<sizeof(ptr)<<endl;
cout<<"size of double is: "<<sizeof(d)<<endl;
cout<<"size of pointer is: "<<sizeof(p2)<<endl;

return 0;
}