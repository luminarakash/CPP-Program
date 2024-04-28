#include<iostream>
#include<vector>
using namespace std;

vector<int> insertionSort(vector<int> &arr, int n){
    
    for(int i = 1; i<n; i++) {
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--) {
            
            if(arr[j] > temp) {
                //shift
                arr[j+1] = arr[j];
            }
            else { // ruk jao
                break;
            }
            
        }
        //copy temp value
        arr[j+1] = temp;  
    } 
    return arr;
}

int main(){
    vector<int> arr{4,6,3,6,85,4};
    vector<int>ans=insertionSort(arr, arr.size());
    for(int i:ans)
    {
        cout<<i<<" ";
    }
}