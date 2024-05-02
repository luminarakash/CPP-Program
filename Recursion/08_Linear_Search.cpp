#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){
    //base case
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        bool remainingPart=linearSearch(arr+1, size-1, key);
        return remainingPart;
    }
}
int main(){
    int arr[5]={3,5,1,2,6};
    int size=5;
    int key;
    cout<<"Enter the key :";
    cin>>key;

    bool ans=linearSearch(arr, size, key);
    if(ans){
        cout<<"Present "<<endl;
    }
    else{
        cout<<"Absent "<<endl;
    }
    return 0;
}