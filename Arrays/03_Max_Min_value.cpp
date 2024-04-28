#include <iostream>
#include<limits.h>
using namespace std;

int getMin(int num[], int n)
{
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        
       if(num[i] < mini){
        mini=num[i];
       }
    }

return mini;}


int getMax(int num[], int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(num[i] > maxi){
            maxi=num[i];
        }
    }

return maxi;}

int main()
{
    int size;
    cout<<"enter the size of array: ";
    cin >> size;
    int num[100];
    cout<<"enter the value of array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    cout << "Maximum value is: " << getMax(num, size) << endl;
    cout << "Minimum value is: " << getMin(num, size) << endl;
}