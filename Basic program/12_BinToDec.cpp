#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of n:";
    cin>>n;

    int i=0, ans=0;
    while(n!=0){
        int digit=n%10;
        
            ans=ans+(pow(2,i)*digit);
        
        n=n/10;
        i++;
    }
    cout<<ans<<endl;
}