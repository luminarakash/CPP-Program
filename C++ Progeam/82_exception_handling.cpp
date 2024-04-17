// nested try block
#include<iostream>
using namespace std;
int main()
{
    try
    {
        cout<<"welcome\n";
        try
        {
            {
               cout<<"to inner try block\n";
               throw 10;
            }
            catch(int x)
            {
                cout<<"throw working\n";
                throw x;
            }
        }
        catch(int y)
        {
            cout<<"outer try block\n";
        }
        
    }
}