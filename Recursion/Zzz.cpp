#include<iostream>
using namespace std;

void InsertionSort(int arr[], int n){
    // base case
    if(n==1){
        return ;
    }

    //Ek case solve kr lo

    for(int i=0; i<n-1; i++){

        if(arr[i]>arr[i+1]){
        
       swap(arr[i], arr[i+1]);
        }
    }

    //recursive call
    InsertionSort(arr, n-1);
}

int main(){
    int arr[5]={3,8,2,5,1};
    InsertionSort(arr, 5);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}