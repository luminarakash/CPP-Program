#include<iostream>
#include<string.h>
using namespace std;
class emp
{
    int empid;
    char ename[10];
    float sal;
    public:
    void getemp(int id,char name[10],float basic);
    void putemp();
};

void emp::getemp(int id ,char name[10],float basic)
{
    empid=id;
    strcpy(ename, name);
    sal= basic;
}

void emp::putemp()
{
cout<<"empid="<<empid<<endl;
cout<<"ename="<<ename<<endl;
cout<<"sal="<<sal<<endl;
}

int main()
{
    emp e;
    e.getemp(100,"akash",100000);
    e.putemp();
}