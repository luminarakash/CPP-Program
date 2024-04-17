#include<iostream>
#include<fstream>
using namespace std;
class stu
{
 int id;
 char name[20];
 public:
 void enq();
};

void stu::enq()
{
    stu s;
    ifstream file("stu.data");
    int idno, found=0;
    cout<<"enter stuid";
    cin>>idno;
    file.read((char*)&s,sizeof(s));

    while(!file.eof())
    {
        if(s.id==idno)
        {
            cout<<"id\t name\n";
            cout<<"         \n";
            cout<<s.id<<"\t"<<s.name<<endl;
            found=1;
            break;
        }
        file.read((char*)&s,sizeof(s));
        file.close();
        if(found==0)
        cout<<"stu not found";
    }
}
int main()
{
    stu s;
    s.enq();
}