#include<iostream>
using namespace std;

int Way(int long long n){
    //base case
    if(n<0){
        return 0;
        }
    if(n==0){
        return 1;
    }
    int ans=Way(n-1)+Way(n-2);
    return ans;
}
int main(){
    int long long n;
    cout<<"Enter the value of n :";
    cin>>n;
    Way(n);
    cout<<Way(n);
    
    return 0;
}