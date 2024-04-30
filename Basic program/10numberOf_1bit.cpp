// count the number of bit
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the of n:";
    cin>>n;

    int count=0;
    while(n != 0){
       //  checking last bit
       if(n & 1){
        count++;
       }
       n=n/10;
    }
    cout<<count<<endl;
    return 0;
}