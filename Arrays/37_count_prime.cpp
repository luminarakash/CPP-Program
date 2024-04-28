#include<iostream>
#include<vector>
using namespace std;

int countPrime(int n){
    int count = 0;
   vector<bool>prime (n+1, true);

    prime[0]=prime[1]=false;

    for(int i=2; i<n; i++){
        if(prime[i]){
            count++;

            for(int j=2*i; j<n; j=j+1){
                prime[j]=0;
            }
        }
    }
    return count;
}

int main(){
    int n;
    cout<<"enter the any number: ";
    cin>>n;
    cout<<countPrime(n);
}