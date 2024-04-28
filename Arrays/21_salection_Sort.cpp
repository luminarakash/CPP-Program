#include<iostream>
#include<vector>
using namespace std;

vector<int> salectionSort(vector<int>& arr, int n){

    for(int i=0; i<n-1; i++){
        int minIndex=i;

        for(int j=i+1; j<n; j++){

            if(arr[j]<arr[minIndex])
            minIndex=j;
        }
        swap(arr[minIndex],arr[i]);
    }
    return arr;

}

int main(){

    vector<int> arr{4,6,3,6,8,5,4};
    vector<int>ans=salectionSort(arr,arr.size());
    for(int i:ans)
    {
        cout<<i<<" ";
    }
    return 0;

    
}