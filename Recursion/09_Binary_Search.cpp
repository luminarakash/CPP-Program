#include<iostream>
using namespace std;

void print(int arr[], int s, int e){
    for(int i=s; i<=e; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool binarySearch(int arr[], int s, int e, int k){
    cout<<endl;
    //base case
    if(s>e){
        return false;  // element not found
    }
    int mid=s+(e-s)/2;
    cout<<"Value of mid is :"<<arr[mid]<<endl;
    if(arr[mid]==k){
        return true;  // element found
    }
    if(arr[mid]<k){
        return binarySearch(arr, mid+1, e, k);
    }
    else{
        return binarySearch(arr, s, mid-1, k);
    }
}

int main(){
    int arr[6]={2,4,6,10,14,18};
    int key;
    cout<<"Enter the key ";
    cin>>key;

    bool ans=binarySearch(arr, 0, 5, key);
    if(ans){
        cout<<"Present "<<endl;
    }
    else{
        cout<<"Absent "<<endl;
    }
    return 0;
}