#include<iostream>
using namespace std;

bool isPresent(int arr[][3], int target, int i, int j){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}

//to print row wise sum
void printSum(int arr[][3], int i, int j){
    cout<<"Printing sum--> "<<endl;
    for(int i; i<3; i++){
        int sum=0;
        for(int j; j<3; j++){
            sum += arr[i][j];
        }
        cout<<sum<<" ";
    }
}

int main(){
    //create 2D array
    int arr[3][3]={1,2,3,4,5,6,7,8,9};

 /*   //  taking input-> row wise input
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
/*
    //  taking input-> col wise input
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[j][i];
        }
    }
*/

    //print
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Enter the element to search: "<<endl;
    int target;

    if(isPresent(arr, target, 3, 3)){
        cout<<"element found "<<endl;
    }
    else{
        cout<<"element Not found "<<endl;
    }
    printSum(arr,3, 3);

    return 0;
}