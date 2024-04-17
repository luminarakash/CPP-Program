#include<iostream>
using namespace std;
class sample
{
    int a,b;
    public:
    sample(int a, int b) //parameterized constructor
    {
        (*this).a=a;
        (*this).b=b;
    }
    sample(sample & old)  //copy constructor
    {
        a=old.a;
        b=old.b;
    }
    void print()
    {
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl; 
    }
};
int main()
{
    sample s1(10,20); //invocked parameterized constructor
    sample s2(s1);
    s1.print();
    s2.print();
}