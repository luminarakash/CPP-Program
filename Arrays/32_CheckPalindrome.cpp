#include<iostream>
using namespace std;
bool checkPalindrome(char a[], int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(a[s] != a[e])
        {
            return 0;   // not palindrome
        }
        else{
            s++;
            e--;
        }
    }
    return 1;      // palindrome
}

int main()
{
    char a[20];
    cout<<"Enter your name: "<<endl;
    cin>>a;
    cout<<"Palindrome or Not: "<<checkPalindrome(a, 5)<<endl;
    return 0;
}