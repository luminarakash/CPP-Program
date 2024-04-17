#include<iostream>
using namespace std;
class author  //container class
{
    char aname[20];
    friend class book;
};
class book //contained class
{
    char bname[10];
    float price;
    author a; //composition
    public:
    void getdata()
    {
        cout<<"enter author name";
        cin>>a.aname;
        cout<<"enter book name";
        cin>>bname;
        cout<<"enter price";
        cin>>price;
    }
    void putdata()
    {
        cout<<"auther name="<<a.aname<<endl;
        cout<<"book name="<<bname<<endl;
        cout<<"price="<<price<<endl;
    }
};
int main()
{
    book b;
    b.getdata();
    b.putdata();
}