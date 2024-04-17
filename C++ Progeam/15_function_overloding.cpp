#include<iostream>
using namespace std;

int sum(int a,int b){
    return a+b;
}

int sum(int a,int b, int c){
    return a+b+c;
}
// volume of a cylinder
int volume(double r, int h){
    return (3.14*r*r*h);
}
//volume of a cube
int volume(int a){
    return (a*a*a);
}
//volume of a rectangular box
int volume(int l, int b, int h){
    return (l*b*h);
}

int main(){
cout<<"the sum of 3 and 6 is "<<sum(3,6)<<endl;
cout<<"the sum of 3,5 and 6 is "<<sum(3,5,6)<<endl;
cout<<"the volume of cylinder "<<volume(3,6)<<endl;
cout<<"the volume of cube "<<volume(3)<<endl;
cout<<"the volume of box "<<volume(3,7,6)<<endl;
    return 0;
}