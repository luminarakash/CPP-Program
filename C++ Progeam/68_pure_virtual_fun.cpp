#include<iostream>
using namespace std;
class shape  //abstract base class
{
    protected:
    float d1,d2;
    public:
    void getdim()
    {
        cin>>d1>>d2;
    }
    virtual float area()=0;  //pure virtual fun
};

class tringle:public shape
{
    public:
    float area()
    {
        return 0.5*d1*d2;
    }
};

class rectangle:public shape
{
    public:
    float area()
    {
        return d1*d2;
    }
};

int main()
{
    tringle t;
    cout<<"enter tringle base, height";
    t.getdim();
    cout<<"area="<<t.area()<<endl;
    
    rectangle r;
    cout<<"enter rectangle length & breath";
    r.getdim();
    cout<<"area="<<r.area();
}