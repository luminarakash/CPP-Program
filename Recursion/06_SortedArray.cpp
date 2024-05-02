#include<iostream>
using namespace std;

bool isSorted(int arr[], int size){
    //base case
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){ //sorted array
        return false;
    }
    else{
        bool remainingPart=isSorted(arr+1, size-1);
        return remainingPart;
    }
}
int main(){
    int arr[5]={2,4,6,8,9};
    int size=5;
    int ans=isSorted(arr, size);
    if(ans){
        cout<<"Array is sorted "<<endl;
    }
    else{
        cout<<"Array is not sorted "<<endl;
    }
    return 0;
}