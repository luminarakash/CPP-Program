#include<iostream>
using namespace std;
class bank
{
    int acno;
    char name[20];
    float bal;
    public:
    void getacc()
    {
        cout<<"enter acno,name & balence=";
        cin>>acno>>name>>bal;
        cout<<"acno="<<acno<<endl;
        cout<<"name="<<name<<endl;
        cout<<"bal="<<bal<<endl;
        cout<<"your a/c created";
    }
};
int main()
{
    bank b;
    b.getacc();
}