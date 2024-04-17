#include<iostream>
using namespace std;
class acno
{
    int acno;
    char name[20];
    public:
    void getacc()
    {
        cout<<"enter acno, name";
        cin>>acno>>name;
    }
    void putacc()
    {
        cout<<"acno="<<acno<<endl;
        cout<<"name="<<name<<endl;
    }
};

class saving:public acno
{
    float bal;
    public:
    void getbal()
    {
        cout<<"enter balence";
        cin>>bal;
        if(bal<500)
        cout<<"min bal 500"<<endl;
        else
        cout<<"acount created"<<endl;
    }
};

class curr:public acno
{
    float bal;
    public:
    void getbal()
    {
        cout<<"enter balence";
        cin>>bal;
        if(bal<1000)
        cout<<"min bal 1000"<<endl;
        else
        cout<<"acount created";
    }
};

int main()
{
    int op;
    cout<<"1.saving a/c\n";
    cout<<"2.saving a/c\n";
    cout<<"enter your optior";
    cin>>op;
    if(op==1)
    {
        saving s;
        s.getacc();
        s.getbal();
    }
    else
    if(op==2)
    {
        curr c;

        c.getacc();
        c.getbal();
    }
    else
    cout<<"invalid salection";
}