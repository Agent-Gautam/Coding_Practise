#include <bits/stdc++.h>
using namespace std;

void subseq(string str, int idx, string newstr){
    if(idx == str.size()){
        cout<<newstr<<" ";
        return;
    }
    char curr = str[idx];

    subseq(str, idx+1, newstr+curr);
    subseq(str, idx+1, newstr);

}

int main(){
    string s = "aba";
    subseq(s, 0, "");
}