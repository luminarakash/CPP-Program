/* #include<iostream>
using namespace std;
int sum(int x=1, int y=2, int z=3);
int main()
{
    cout<<"sum="<<sum(10,20,30)<<endl;
    cout<<"sum="<<sum(10,20)<<endl;
    cout<<"sum="<<sum(10)<<endl;
    cout<<"sum="<<sum()<<endl;
}
int sum(int x, int y, int z)
{
return x+y+z;
} */



#include<iostream>
using namespace std;
float s(float p, float t, float r=3)
{
    return (p*t*r)/100;
}
int main()
{
    cout<<"s:="<<s(1000,10,2)<<endl;
    cout<<"s:="<<s(1000,10)<<endl;
}