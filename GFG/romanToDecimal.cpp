#include <bits/stdc++.h>
using namespace std;

int romanToDecimal(string str){
    int sum = 0;
    map<char,int> romans = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
    for(int i = 0; i < str.size(); i++){
        if(romans[str[i]] < romans[str[i+1]]){
            sum += romans[str[i+1]] - romans[str[i]];
            i++;
        }
        else{
            sum += romans[str[i]];
        }
    }
    return sum;
}
int main(){
    int s = romanToDecimal("MMMCDXLIV");
    cout<<s<<endl;
}