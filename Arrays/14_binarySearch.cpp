#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start=0;
    int end=size-1;
    int mid= start + (end-start)/2;
    while(start<=end)
    {
        if (arr[mid]==key){
            return mid;
        }

        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid= start + (end-start)/2;
    }
    return -1;
}

int main()
{
    int even[6]={2,4,6,8,12,18};
    int odd [5]={3,8,11,14,16};

    int evenIndex=binarySearch(even, 6, 18);
    cout<<"index of 18 is: "<<evenIndex<<endl;

    int oddIndex=binarySearch(odd, 5, 8);
    cout<<"index of 8 is: "<<oddIndex<<endl;
    return 0;
}