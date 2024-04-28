#include<iostream>
#include<vector>
using namespace std;

vector<int> reverseArray(vector<int>&arr,int m){
    int s=m+1, e=arr.size()-1;
    while(s<=e){
        swap(arr[5], arr[e]);
        s++;
        e--;
    }
    return arr;
}
int main(){
        vector<int>arr {11,7,3,12,4,8};
        vector<int>ans=reverseArray(arr, 4);
    for(int i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
}