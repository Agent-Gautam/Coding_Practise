#include<bits/stdc++.h>
using namespace std;

int index(char ch,vector<char> v){
    for(int x = 0; x < v.size(); x++){
        if(v[x] == ch){
            return x;
        }
    }
    return -1;
}

int roman(string str){
    int sum = 0;
    vector<char> r = {'M','D','C','L','X','V','I'};
    vector<int> val = {1000,500,100,50,10,5,1};
    int i = 0;
    while(i <= str.size()-2){
        char c1 = str[i];
        char c2 = str[i+1];
        int i1 = index(c1, r), i2 = index(c2,r);
        if(i1<=i2){
            sum += val[i1];
            i++;
        }
        else{
            sum += val[i2] - val[i1];
            i +=2;
        }
    }
    return sum;
}
int main(){
    string s = "MMMCDXLIV";
    cout<<roman(s)<<endl;
}