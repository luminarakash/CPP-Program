 #include <iostream>
using namespace std;
int main()
{
    int a = 100;
    int &b = a;
    int &c = b;
    cout << a << b << c << endl;
}


//reference variable in swap function
/* #include<iostream>
using namespace std;
void swap(int &a,int&b)
{
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
    int a=10, b=20;
    swap(a,b);
    cout<<"a="<<a<<"\t b="<<b;
} */