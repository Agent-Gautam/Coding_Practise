#include <bits/stdc++.h>
using namespace std;

static string a = "";

string colName (long long int n)
    {
        string result = "";
        while(n > 0){
            int rem = (n - 1) % 26;
            char ch = 'A' + rem;
            result = ch + result;
            n = (n -1)/26;
        }
        
        return result;
    }
int main()
{
    int num = 54321;
    
    cout <<colName(num)<<endl;
}