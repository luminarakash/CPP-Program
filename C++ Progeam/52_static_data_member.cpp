#include<iostream>
using namespace std;
class sample
{
    static int a,b;
    public:
    static void getdata()
    {
        cout<<"enter two integer";
        cin>>a>>b;
        cout<<"a="<<endl;
        cout<<"b="<<endl;
    }
};

int sample::a;
int sample::b;

int main()
{
    sample s;
    s.getdata();
    sample::getdata();
}