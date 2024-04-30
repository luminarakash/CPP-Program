#include <iostream>
using namespace std;

bool isEven(int a)
{
    if (a & 1){
        return 0;
    }
    else {
        return 1;
    }
}
int main()
{
    int num, c, y;
    c = 'y';
    while (c == 'y')
    {
        cout << "enter the num:";
        cin >> num;
        if (isEven(num))
        {
            cout << "number is even" << endl;
        }
        else
        {
            cout << "number is odd" << endl;
        }
        cout << endl;
    }
}