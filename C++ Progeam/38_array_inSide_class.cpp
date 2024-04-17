#include<iostream>
using namespace std;
class stu
{
    int id,sub[6];
    char name[20];
    public:
    void getstu();
    void result();
};

void stu :: getstu()
{
    cout<<"enter stu id,name";
    cin>>id>>name;
    cout<<"enter 6 sub marks";
    for(int i=0; i<6; i++)
    cin>>sub[i];
}

void stu :: result()
{
    int tot=0;
    float avg;
    for(int i=0; i<6; i++)
    tot += sub[i];
    avg=tot/6.0;
    cout<<"total="<<tot<<endl;
    cout<<"avg="<<avg<<endl;
    cout<<"result";
    for( int i=0; i<6; i++)
    if(sub[i]<35)
    {
        cout<<"fail";
    }
    cout<<"pass";
}

int main()
{
    stu s;
    s.getstu();
    s.result();
}