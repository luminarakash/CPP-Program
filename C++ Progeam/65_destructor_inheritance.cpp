#include <iostream>
using namespace std;
class base
{
public:
    ~base()
    {
        cout << "base class deconst\n";
    }
};

class der : public base
{
public:
    ~der()
    {
        cout << "derived class deconst\n";
    }
};

int main()
{
    der d;
}