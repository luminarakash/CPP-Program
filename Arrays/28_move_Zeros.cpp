// move Non-zero to left side
#include<iostream>
#include<vector>
using namespace std;

vector<int> moveZeros(vector<int>&arr,int n){
    int nonZero =0;

    for(int j=0; j=n; j++){
        if(arr[j] != 0){
            swap(arr[j], arr[nonZero]);
            nonZero++;
        }
    }
    return arr;
}
int main(){
    vector<int> arr {0,1,0,3,12};
    vector<int> ans=moveZeros(arr, arr.size());
    for(int i:ans)
    {
        cout<<i<<" ";
    }
     return 0;
}