#include<iostream>
using namespace std;

void solve(int num, int& ans, int index){
    //base case
    if(index>=num){
        ans=num;
        return ;
    }
    for(int j=index; j<num; j++){
        swap(num[index], num[j]);
        Solve(num, index, index+1);
        //backtrack
    swap(num[index], num[j]);
    }
}
int permute(int& num){
    int ans;
    int index=0;
    Solve(num, ans, index);
    return ans;
}
int main(){
    
}