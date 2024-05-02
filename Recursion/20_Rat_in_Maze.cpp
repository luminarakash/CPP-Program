#include<iostream>
using namespace std;

bool isSafe(int x, int y, int n, int visited, int& m){
    if((n>=0 && x<n) && (y>=0 && y<n) && visited[x][y]==0 && m[x][y]==1){
        return true;
    }
    else{
        return false;
    }
}

void Solve(int& m, int n, string& ans, int n, int y, int visited, int path){
    //you have reached x,y here
    //base case
    if(x==n-1 && y==n-1){
        ans=path;
        return;
    }
    visited[x][y]=1;
    //4 choice--> D,L,R,U
    //down
    int newx=x+1;
    int newy=y;
    if(isSafe(newx,newx,n, visited, path)){
        path='D';
        Solve(m, n, ans, newx, newy, visited, path);
        delete.path();
    }

     //left
    int newx=x;
    int newy=y-1;
    if(isSafe(newx,newx,n, visited, path)){
        path='L';
        Solve(m, n, ans, newx, newy, visited, path);
        delete.path();
    }

    //Right
    int newx=x;
    int newy=y+1;
    if(isSafe(newx,newx,n, visited, path)){
        path='R';
        Solve(m, n, ans, newx, newy, visited, path);
        delete.path();
    }

     //up
    int newx=x-1;
    int newy=y;
    if(isSafe(newx,newx,n, visited, path)){
        path='U';
        Solve(m, n, ans, newx, newy, visited, path);
        delete.path();
    }
    visited[x][y]=0;
}

string findpath(int& m, int n){
    string ans;
    if(m[0][0]=0){
        return ans;
    }
    int src=0;
    int src=0;
    int visited=m;
    //inilization with zero
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            visited[i][j]=0;
        }
    }
    string path=" ";
    Solve(m, n, ans, srcx, srcy, visited, path);
    Sort(ans.begin(), ans.end());
    return ans;
}
int main(){
    
}