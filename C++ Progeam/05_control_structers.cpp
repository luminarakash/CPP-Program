// control structers: [1. sequence, 2. solution 3. loop]
//  sequence control [1. if else 2. if else ladder 3. switch]

#include <iostream>
using namespace std;

int main()
{
    int age;
    // if else statement
    /*cout<<"tell me your age"<<endl;
    cin>>age;
    if(age<18){
        cout<<"you can not come to my party"<<endl;
    }
    else if(age==18){
        cout<<"you will get a kid pass to the party"<<endl;
    }
    else{
        cout<<"you can come to the party"<<endl;
    }*/

    // switch statement
    switch (age)
    {
    case 18:
        cout << "you are 18" <<endl;
        break;
    case 22:
        cout << "you are 22" << endl;
        break;
    case 2:
        cout << "you are 2" << endl;
        break;
    default:
        cout << "no special cases" << endl;
        break;
    }
    return 0;
}