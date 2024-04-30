#include <iostream>
using namespace std;

bool isprime(int);
int main()
{
    int n;
    cout << "Enter any number:" << endl;
    cin >> n;
    isprime(n) ? cout<<"true\n" : cout<<"false\n";
    return 0;
}

bool isprime(int n)
{
    int i=2;
    if(n<=1)
    return false;
    while(n>i)
    {
        if(n%i==0)
        return false;
        i++;
    }
    return true;
}