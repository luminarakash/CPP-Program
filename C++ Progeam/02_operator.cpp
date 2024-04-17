// operators in c++

#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 5;

    // arithmetic operators
    cout << "Arithmetic operator in c++:" << endl;
    cout << "the value of a+b is " << a + b << endl;
    cout << "the value of a-b is " << a - b << endl;
    cout << "the value of a*b is " << a * b << endl;
    cout << "the value of a/b is " << a / b << endl;
    cout << "the value of a%b is " << a % b << endl;
    cout << "the value of a++ is " << a++ << endl;
    cout << "the value of a-- is " << a-- << endl;
    cout << "the value of ++a is " << ++a << endl;
    cout << "the value of --a is " << --a << endl;
    cout << endl;

    // assignment operators -->used to assign a new values
    // int a=3, b=6;
    // char d='d';

    // comparision operators
    cout << "comparision operator in c++:" << endl;
    cout << "the value of a==b is " << (a == b) << endl;
    cout << "the value of a!=b is " << (a != b) << endl;
    cout << "the value of a>=b is " << (a >= b) << endl;
    cout << "the value of a<=b is " << (a <= b) << endl;
    cout << "the value of a>b is " << (a > b) << endl;
    cout << "the value of a<b is " << (a < b) << endl;
    cout << endl;

    // logical operators
    cout << "logical operators in c++:" << endl;
    cout << "the value of this logical AND operator ((a==b && (a<b)) is:" << ((a == b) && (a < b)) << endl;
    cout << "the value of this logical OR operator ((a==b || (a<b)) is:" << ((a == b) || (a < b)) << endl;
    cout << "the value of this logical NOT operator (!(a==b)) is:" << (!(a == b)) << endl;
    return 0;
}