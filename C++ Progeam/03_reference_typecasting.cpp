#include<iostream>
using namespace std;

int main(){

//********reference variables***********
//float x=455;
//float & y = x;
//cout<<x<<endl;
//cout<<y<<endl;

//********Typecasting***********
int a=45;
float b=45.46;
cout<<"the alue of a is "<<(float)a<<endl;
cout<<" the value of a is "<<float(a)<<endl;

cout<<"the value of b is "<<(int)b<<endl;
cout<<"the value of b is "<<int(b)<<endl;
int c = int(b);

cout<<"the expression is "<<(a+b)<<endl;
cout<<"the expression is "<<(a+int(b))<<endl;
cout<<"the expression is "<<(a+(int)b)<<endl;

return 0;
}