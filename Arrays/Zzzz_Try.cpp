#include <iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std; 

string removeoccure(string& s, string& part ){
    while(s.length() != 0 && s.find(part) < s.length()){
        s.erase(s.find(part), part.length());
    }
    return s;
}
int main(){
    string s = "daabcbaabcbc";
    string part = "abc";
    string ch = removeoccure(s, part);
    for(int i = 0 ; i<ch.length() ; i++){
        cout<< ch[i];
    }
}