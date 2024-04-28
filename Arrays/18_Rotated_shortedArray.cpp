#include<iostream>
#include<vector>
using namespace std;

vector<int> getPivot(vector<int>& arr, int n) {

    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e) {

        if(arr[mid] >= arr[0])
        {
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return arr;
}

vector<int> binarySearch(vector<int>& arr, int s, int e, int key) {

    int start = s;
    int end = e;

    int mid = start + (end-start)/2;

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }

        //go to right wala part
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else{ //key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    
    return -1;
}



vector<int> findPosition(vector<int>& arr, int n, int k)
{
    int pivot = getPivot(arr, arr.size());
    if( k >= arr[pivot] && k <= arr[n-1])
    {//BS on second line
        return binarySearch(arr, pivot, n-1, k);
    }
    else
    {//BS on first line
        return binarySearch(arr, 0, pivot - 1, k);
    }
    
}


int main()
{
    vector<int>arr {3,8,10,17,1,4};
    vector<int> pivote_element_index=getPivot(arr, arr.size());
    for(int i:pivote_element_index)
    {
        cout<<i<<" ";
    }

    vector<int> even {2,4,6,8,12,18};
    vector<int> odd {3,8,11,14,16};
    
    vector<int> evenIndex=binarySearch(even, even.size(), 18);
    for(int i:evenIndex)
    {
        cout<<i<<" ";
    }

    vector<int> oddIndex=binarySearch(odd, odd.size(), 8);
    for(int i:oddIndex)
    {
        cout<<i<<" ";
    }
    return 0;
}