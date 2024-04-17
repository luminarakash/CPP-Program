// how to write a data into a data file
#include<iostream>
#include<fstream>
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
};
int main()
{
    stu s;
    //ofstream file("stu.data");
    ofstream file;
    file.open("stu.data");
    char op;
    do
    {
        s.getstu();
        file.write((char*)&s,sizeof(s));
        cout<<"one row created\n";
        cout<<"any more student[y/n]";
        cin>>op;
    }
    while(op=='y'||op=='Y');
    file.close();
}