//base class::constructor(parameter);

#include<iostream>
#include<string.h>
using namespace std;
class stu
{
    char name[20], course[20];
    public:
    stu()  //def const
    {   
    }
    stu(char marks[20], char course[20])  //parameterized const
    {
        strcpy(this->name,name);
        strcpy(this->name,name);
    }
    void showstu()
    {
        cout<<"name="<<name<<endl;
        cout<<"course="<<course<<endl;
    }
};

class marks:public stu
{
    int m,p,c;
    public:
    marks(char name[20], char course[20], int m, int p, int c)
    {
        stu::stu(name,course);
        this->m=m;
        this->p=p;
        this->c=c;
    }
    void showmarks()
    {
        cout<<m<<ends<<p<<ends<<c;
    }
};

int main()
{
    marks m("akash","mpc",92,95,98);
    m.showstu();
    m.showmarks();
}