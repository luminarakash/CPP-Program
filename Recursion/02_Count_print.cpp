// for count printing 
#include<iostream>
using namespace std;

void print(int n){
    //base case
    if(n==0){
        return;
    }
    //recursive relation
    print(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cout<<"enter the no of n :";
    cin>>n;
    cout<<endl;
    print(n);

    return 0;
}