// Dynamic memory allocation
#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter the number of n :"<<endl;
    cin>>row;

    int col;
    cin>>col;
    //create 2D array
    int** arr=new int*[row];
    for(int i=0; i<row; i++){
        arr[i]=new int [row];
    }
    //taking input
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }
    //taking output
    cout<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; i<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //releasing memory
    for(int i=0; i<row; i++){
        delete[] arr[i];
    }
    delete []arr;

    return 0;
}