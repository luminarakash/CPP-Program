#include<iostream>
using namespace std;
class stu
{
    int id;
    char name[20];
    public:
    void getstu()
    {
        cout<<"enter stu id,name";
        cin>>id>>name;
    }
    void putstu()
    {
        cout<<"id="<<id<<endl;
        cout<<"name="<<name<<endl;
    }
};

class phy : private stu
{
    float h,w;
    public:
    void getphy()
    {
        getstu();
        cout<<"enter stu heigest & weight";
        cin>>h>>w;
    }
    void putphy()
    {
        putstu();
        cout<<"height="<<h<<endl;
        cout<<"weight="<<w<<endl;
    }
};

int main()
{
    phy p;
    p.getphy();
    p.putphy();
}