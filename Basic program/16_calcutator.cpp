#include <iostream>
using namespace std;

int main()
{
    int a, b, c, y, choice;
    c = 'y';
    while (c == 'y')
    {
        cout << "Enter the value of a & b:";
        cin >>a>>b;

        cout<<"enter your choice:";
        cin>>choice;
        switch (choice)
        
        {
        case 1:
            cout << "Addition ="<<(a + b)<<endl;
            break;
        case 2:
            cout << "Subtraction =" <<(a - b)<<endl;
            break;
        case 3:
            cout << "Multiplication ="<<(a * b)<<endl;
            break;
        case 4:
            cout << "Division =" <<(a / b)<<endl;
            break;
        case 5:
            cout << "Remainder =" <<(a % b)<<endl;
            break;
        default:
            cout << "Invalid choice !!"<<endl;
            break;
        }
        cout<<endl;
    }
}