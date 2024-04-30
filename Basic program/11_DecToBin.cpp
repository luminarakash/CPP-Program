// decimal to binary
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "enter the nubmer of n:";
    cin >> n;

    int binNUM = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n&1;
        binNUM =  (bit * pow(10,i)) + binNUM;
        n = n>>1;
        i++;
    }
    cout << "ans is:" << binNUM << endl;
    return 0;
}