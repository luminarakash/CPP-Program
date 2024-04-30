#include<iostream>
using namespace std;

void dummy(int n){
    n++;
    cout<<"n is:"<<n<<endl;
}

int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;

    dummy(n);

    cout<<"number is:"<<n<<endl;
    return 0;
}