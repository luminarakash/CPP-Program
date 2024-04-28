#include<iostream>
#include<vector>
using namespace std;

vector<int> rotate(vector<int>&arr, int k){
    vector<int>temp(arr.size());
    for(int i=0; i<arr.size(); i++){
        temp[(i+k)%arr.size()]=arr[i];
    }
    arr=temp;
    return arr;
}
int main(){
    vector<int>arr {1,2,3,4,5,6};
    vector<int>ans=rotate(arr, 2);
    for(int i:ans)
    {
        cout<<i<<" ";
    }
     return 0;
}