// static data member

#include<iostream>
using namespace std;

class employee{
    int id;
    static int count;

    public:
    void setdata(void){
        cout<<"enter the id"<<endl;
        cin>>id;
        count++;
    }
    void getdata(void){
        cout<<"the id of this employe is "<<id<<"and this is employee number "<<count<<endl;
    }
};

// count is the static data member of class employee
int employee::count=1000; //default value is 0
int main(){
employee akash, aman, abhay;
// akashid=1;
// akash.count=1;  //can not do this as id and count are private

akash.setdata();
akash.getdata();

aman.setdata();
aman.getdata();

abhay.setdata();
abhay.getdata();

return 0;
}