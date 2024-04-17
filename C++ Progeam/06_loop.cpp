//********loop*********[1.for, 2.while, 3.do while]

/* syntax for for loop
for(initilization; condition; updateion)
{
    loop body(c++ code)
} */

#include <iostream>
using namespace std;

int main()
{
    /* syntax for for loop
    for(initilization; condition; updateion)
    {
        loop body(c++ code)
    } */
    // for(int i=0; i<=5; i++){
    //    cout<<i<<endl;
    // }


    /* syntax for while loop
    while(condition);
    {
        c++ statment ;
    }  */
    // int i=0;
    // while(i<=5){
    //    cout<<i<<endl;
    //      i++;
    //  }


    /* syntax for do while
    do{
        c++ statement;
    }
    while(condition)  */
    int i = 0;
    do
    {
        cout << i << endl;
        i++;
    } while (i <= 5);
     return 0;
}