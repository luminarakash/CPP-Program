// passing type parameter (object) to member function.

#include <iostream>
using namespace std;
class sample
{
private:
    int a;

public:
    void geta()
    {
        cout << "enter a value";
        cin >> a;
    }
    void puta()
    {
        cout << "a=" << a << endl;
    }
    void big(sample s2)
    {
        if (a > s2.a)
        cout<<"a is big";
           else if(a < s2.a)
           cout<<"s2.a is big";
            cout<< "both are equal";
    }
};

int main()
{
    sample s1,s2;
    s1.geta();
    s2.geta();
    s1.puta();
    s2.puta();
    s1.big(s2);
}