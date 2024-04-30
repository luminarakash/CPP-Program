#include<iostream>
using namespace std;int main(){
    int n1, n2;
    cout<<"enter two number:"<<endl;
    cin>>n1>>n2;
    int sum=0;
    while(n1<=n2){
        sum=sum+n1;
        n1++;
        cout<<n1<<" ";
    }
    cout<<endl<<"value of sum n1 to n2 is: "<<sum;
}