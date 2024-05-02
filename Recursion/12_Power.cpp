#include<iostream>
#include<math.h>
using namespace std;

int Power(int a, int b){
    //base case
    if(b==0){
        return 1;
    }
    else if(b==1){
        return a;
    }
    // recrsive call
    int ans = Power(a, b/2);
    //if b is even
    if(b%2==0){
        return ans*ans;
    }
    else{ //if b is odd
        return a*ans*ans;
    }
}
int main(){
    int a,b;
    cout<<"Enter the value of a & b :";
    cin>>a>>b;
    int answer=Power(a,b);
    cout<<"Answer is :"<<answer<<endl;

    return 0;
}