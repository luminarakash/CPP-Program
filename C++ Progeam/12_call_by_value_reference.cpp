#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

void swap(int a, int b)
{                 // temp a  b
    int temp = a; // 4   4  5
    a = b;        // 4   5  5
    b = temp;     // 4   5  4
}

int swappointer(int *a, int *b)
{                  // temp a  b
    int temp = *a; // 4   4  5
    *a = *b;       // 4   5  5
    *b = temp;     // 4   5  4
}

// call by reference using
void swapreferencevar(int a, int b)
{                 // temp a  b
    int temp = a; // 4   4  5
    a = b;        // 4   5  5
    b = temp;     // 4   5  4
}

int main()
{

    int a = 4, b = 5;
    cout << "the sum of 4 and 5 is " << sum(a, b) << endl;

    cout << "the value of a is " << a << " and the value of b is " << b << endl;
    swap(a,b); // this will not swap a & b
    //cout << "a=" << a << "b=" << b << endl;

    swappointer(&a, &b); // this will swap a & b using pointer reference
    cout << "the value of a is " << a << " and the value of b is " << b << endl;

    swapreferencevar(a, b); // this will swap a & b using reference variable
    cout << "the value of a is " << a << " and the value of b is " << b << endl;
    return 0;
}