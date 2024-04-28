#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if (key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key)
{
    int s=0, e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if (key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int totalOcc(int first,int last )
{
    int TotOcc;
    TotOcc=(last-first+1);
}

int main()
{
    int even[5]={1,2,3,3,5};
    int first=firstOcc(even, 5, 3);
    int last=lastOcc(even, 5, 3);
    cout<<"First Occurrence of 3 is Index : "<<first<<endl;
    cout<<"Last Occurrence of 3 is Index : "<<last<<endl;
    int total=totalOcc(first,last);


    cout<<"Total no. of Occurrence of key :"<<total<<endl;
    return 0;
}