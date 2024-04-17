#include<iostream>
using namespace std;
class sample
{
    static int a;
    public:
    sample()  //constructor
    {
        a++;
        cout<<a<<"obj created\n";
    }
    ~sample()  //destructor
    {
        cout<<a<<"object deleted\n";
        a--;
    }
};

int sample::a;
int main()
{
    sample s1,s2,s3;
}