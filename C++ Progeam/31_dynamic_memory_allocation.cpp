#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter array size";
    cin >> n;
    int *p = new int[n];
    for (int i = 0; i < n; i++)
        cin >> p[i];
    cout << "element are";
    for (int i = 0; i < n; i++)
        cout << p[i];
    delete p;
}