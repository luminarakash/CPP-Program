#include<iostream>
using namespace std;
long long int SqrtInteger(int n){
    int s=0;
    int e=n;
    long long int mid =s+(e-s)/2;
    long long int ans=-1;
    while(s<=e){
        long long int squre=mid*mid;
        if(squre==n)
        return mid;
        if(squre<n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

double morePrecision(int n, int precision, int tempSol){
    double factor=1;
    double ans=tempSol;
    for(int i=0; i<precision; i++){
        factor=factor/10;
    for(double j=ans; j*j<n; j=j+factor){
        ans=j;
    }
  }
return ans;
}

int main(){
    int n;
    cout<<"enter the number: "<<endl;
    cin>>n;
    int tempSol=SqrtInteger(n);
    cout<<"Answer is: "<<morePrecision(n,3,tempSol)<<endl;
    return 0;
}