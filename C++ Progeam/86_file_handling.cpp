#include<iostream>
#include<fstream>
using namespace std;
class stu
{
  int id;
  char name[20];
  public:
  void putstu()
  {
    cout<<id<<"\t"<<name<<endl;
  }
};
int main()
{
    stu s;
    ifstream file("stu.data",ios::in);
    file.read((char*)&s,sizeof(s));
    cout<<"id\t name\n";
    cout<<"         \n";
    while(!file.eof())
    {
        s.putstu();
        file.read((char*)& s,sizeof(s));
    }
    file.close();
}