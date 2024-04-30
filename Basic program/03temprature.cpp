#include<iostream>
using namespace std;
int main(){
   float frh, cel;

   // celsius to fahrenheit

  /* cout<<"input the celsius:"<<endl;
    cin>>cel;
    frh=(cel*9.0)/5.0 + 32;
    cout<<frh;   */

    // fahrenheit to celsius
    cout<<"input the fahrenheit:"<<endl;
    cin>>frh;
    cel=(frh-32)*5.0/9.0;
    cout<<cel;

}