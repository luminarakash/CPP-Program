// overloading insertion and extraction operator
#include<iostream>
using namespace std;
class stu
{
    int id;
    char name[20];
    public:
    freind void operator>>(istream &in, stu &s)
    {
        cout<<"enter stu id, name";
        cin>>s.id>>s.name;
    }
    friend void operator<<(ostream &out, stu &s)
    {
        cout<<"id="<<s.id<<endl;
        cout<<"name="<<s.name<<endl;
    }
};

int main()
{
    stu s;
    cin>>s;
    cout<<s;
}