#include<iostream>
using namespace std;
int x=200;
void fun()
{
    class test
    {
        int x;
        public:
        void show()
        {
           x=100;
           cout<<"local x="<<x<<endl;
           cout<<"global x="<<::x;
        }
    };
    test t;
    t.show();
}
int main()
{
    fun();
}