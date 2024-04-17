// oops - classes and objects
//  class --> extaion of structures ( in c)
//  structures had liminations
//  classes --> can make few members as private & few as public
//  structures in c++ are typedefed
//  you can declare objects along width the class declarion like this:
/* class employee{
    class definition
} akash, aman, abhay; */
// akash.salary= 8 makes no sense if salary is private
// nesting of member functions

#include <iostream>
#include <cstring>
using namespace std;

class binary
{
private:
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
}b;

void binary ::read(void)
{
    cout << "enter a binary number " << endl;
    cin >> s;
}
void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = 'i';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void display ::display(void)
{
    cout << "displaying your binary number " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}