#include<iostream>
using namespace std;
class circle
{
    float r;
    public:
    circle() //default constructor
    {
        r=5;
    }
    circle(float r) //parameterized constructor
    {
        (*this).r=r;
    }
    void showarea() //member fun
    {
        cout<<"area="<<3.14*r*r<<endl;
    }
};
int main()
{
    circle c1; //obj
    circle c2;
    c1.showarea();
    c2.showarea();
}