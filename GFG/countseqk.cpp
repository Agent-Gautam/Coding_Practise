#include <bits/stdc++.h>
using namespace std;

int substrCount(string str, int k, int idx, string newstr, set<string> set){
    if(idx == str.size()){
        if(){
            return;
        }
    }
    char curr = str[idx];

    substrCount(str, k, idx+1, newstr+curr, set);

    substrCount(str, k, idx+1, newstr, set);
}

int main(){
    set<string> set;
    set.insert("hello");
    set.insert("yellow");
    set.insert("pello");
    
    
}