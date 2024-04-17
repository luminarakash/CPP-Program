#include<iostream>
using namespace std;
int main()
{
    try
    {
        cout<<"testing any exception";
        throw 10;
    }
    catch(int x)
    {
      cout<<"try block throw\n";
    }
}