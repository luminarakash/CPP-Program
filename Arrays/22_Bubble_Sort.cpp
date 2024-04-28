#include<iostream>
#include<vector>
using namespace std;

vector<int> bubbleSort(vector<int>& arr, int n)
{   
    for(int i = 1; i<n; i++) {
        //for round 1 to n-1
        bool swapped = false;
        
        for(int j =0; j<n-i; j++) {
            
            //process element till n-i th index
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
            
        }
        
        if(swapped == false) {
            //already sorted
            break;
        }
           
    }
    return arr;
}
    int main(){
    vector<int> arr{4,6,3,6,85,4};
    vector<int>ans=bubbleSort(arr, arr.size());
    for(int i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
    }