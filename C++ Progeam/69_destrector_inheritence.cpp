#include<iostream>
using namespace std;
class base
{
   public:
   base()  //destructor
   {
    cout<<"base class constructor"<<endl;
   }
   virtual~base()  //destructor
   {
    cout<<"base class destructor"<<endl;
   }
};

class der:public base
{
  public:
  der()  //destructor
   {
    cout<<"der class constructor"<<endl;
   }
   ~der()  //destructor
   {
    cout<<"der class destructor"<<endl;
   }
};

int main()
{
    base *b=new der;
    delete b;
}