#include<iostream>
using namespace std;

struct employee
{
    int eid;  //4
    char favchar;  //1
    float salary;  //4
};

 union money{
        int rice;  //4
        char car;  //1
        float bike;  //4
    };
int main(){
    // structers*********
    struct employee akash;
    akash.eid = 1;
    akash.favchar = 'c';
    akash.salary = 100000;
    cout<<"the value is "<<akash.eid<<endl;
    cout<<"the value is "<<akash.favchar<<endl;
    cout<<"the value is "<<akash.salary<<endl;
    cout<<endl;
    
    // unions**********
    union money m1;
    m1.rice = 4;
    m1.car = 2;
    m1.bike = 15;
    cout<<m1.rice<<endl;
    cout<<m1.car<<endl;
    cout<<m1.bike<<endl;
    cout<<endl;

    // enums*********
    enum menu{tofy,choklate,biskit, namkin};
    cout<<tofy<<endl;
    cout<<choklate<<endl;
    cout<<biskit<<endl;
    cout<<namkin<<endl;
    
    return 0;
}