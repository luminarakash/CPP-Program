//  *(constant datatype variable=value)

#include<iostream>
using namespace std;
class si
{
    float p;
    int t;
    const float r;
    public:
    si():r(2.5)
    {}
    void read(float pa, int ti)
    {
        p=pa;
        t=ti;
    }
    float show()
    {
        return(p*t*r)/1000;
    }
};

int main()
{
    si s;  //obj
    s.read(1000,10);
    cout<<"int="<<s.show();
}