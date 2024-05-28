#include<iostream>
using namespace std;

class NStack
{
    int *arr;
    int *top;
    int *next;
    
    int n, s;
     
    int freespot;
    
public:
    // Initialize your data structure.
    NStack(int N, int S)
    {
        n = N;
        s = S;
        arr = new int[s];
        top = new int[n];
        next =new int[s];
        
        //top initialise
        for(int i=0; i<n; i++) {
            top[i] = -1;
        }
        
        //next initialise
        for(int i=0; i<s; i++) {
            next[i] = i+1;
        }
        //update last index value to -1
        next[s-1] = -1;
        
        //initialise freespot
        freespot = 0;
        
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        //check for overflow
        if(freespot == -1) {
            return false;
        }
        
        //find index
        int index = freespot;
        
        //insert element into array
        arr[index] = x;
        
        //update freespot
        freespot = next[index];
       
        //update next;
        next[index] = top[m-1];
        
        //update top
        top[m-1] = index;
        
        return true;
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        //check underflow condition
        if(top[m-1] == -1) {
            return -1;
        }
        
        int index= top[m-1];
        
        top[m-1] = next[index];
        
        next[index] = freespot;
        
        freespot = index;
        
        return arr[index];
    }
};
int main(){
    int N = 3, s = 10;
    NStack Ns(N, s);
 
    // Let us put some items in stack number 2
    Ns.push(15, 2);
    Ns.push(45, 2);
 
    // Let us put some items in stack number 1
    Ns.push(17, 1);
    Ns.push(49, 1);
    Ns.push(39, 1);
 
    // Let us put some items in stack number 0
    Ns.push(11, 0);
    Ns.push(9, 0);
    Ns.push(7, 0);
 
    cout << "Popped element from stack 2 is " << Ns.pop(2) << endl;
    cout << "Popped element from stack 1 is " << Ns.pop(1) << endl;
    cout << "Popped element from stack 0 is " << Ns.pop(0) << endl;
}