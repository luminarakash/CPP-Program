#include <iostream>
using namespace std;
class test
{
    int a, b;

public:
    void read() // modifier
    {
        a = 10;
        b = 20;
    }

    void show() const // accessor
    {
        a = 30;
        b = 40;
        cout << "a=" << a << endl;
        cout << "b=" << b << endl;
    }
};

 int main()
{
    test t;
    t.read();
    t.show();
}