#include<iostream>
using namespace std;
int main()
{
    try
    {
        cout<<"before throw\n";
        throw 1;
        cout<<"after throw\n";
    }
    catch(int x)
    {
      cout<<"x<<is printed\n";
    }
    cout<<"thank you";
}