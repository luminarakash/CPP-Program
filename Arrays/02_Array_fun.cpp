#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int third[15]={2,7};
    int n=15;
    printArray(third, 15);

    int forth[10]={1};
    int p=10;
    printArray(forth, 10);
  
    int fifth[10]={0};
    int q=10;
    printArray(fifth, 10);
}