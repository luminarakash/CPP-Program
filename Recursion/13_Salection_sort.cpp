// salection sort
#include<iostream>
using namespace std;

int minIndex(int arr[], int i, int j){
    
    if(i==j){
        return i;
    }

   int k= minIndex(arr, i+1, j);
    if(arr[i]<arr[k]){
    k=i;
    }
    return k;
}

void SalectionSort(int arr[], int n, int index=0){
    // base case
    if(index==n){
        return ;
    }

     int k=minIndex(arr, index, n-1);
     if(k != index){
        swap(arr[k], arr[index]);
     }
     
    //recursive call
    SalectionSort(arr,n,index+1);
}

int main(){
    int arr[5]={3,8,2,5,1};
    SalectionSort(arr, 5);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}