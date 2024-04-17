#include<iostream>
using namespace std;
class stu
{
    int id;
    char name[20];
    public:
    void getstu()
    {
        cout<<"enter stu id, name";
        cin>>id>>name;
    }
    void putstu()
    {
        cout<<"id="<<id<<endl;
        cout<<"name="<<name<<endl;
    }
};

class marks
{
    protected:
    int m1,m2,m3;
    public: 
    void getmarks()
    {
        cout<<"enter sub, marks";
        cin>>m1>>m2>>m3;
    }
    void putmarks()
    {
        cout<<"m1="<<m1<<endl;
        cout<<"m2="<<m2<<endl;
        cout<<"m3="<<m3<<endl;
    }
};

class result:public stu, public marks{
    int tot;
    float avg;
    public:
    void show()
    {
        tot=m1+m2+m3;
        avg=tot/3.0;
        cout<<"tot="<<tot<<endl;
        cout<<"avg="<<avg<<endl;
    }
};

int main()
{
    result r;
    r.getstu();
    r.getmarks();
    r.putstu();
    r.putmarks();
    r.show();
}