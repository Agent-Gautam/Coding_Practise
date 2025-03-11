#include <bits/stdc++.h>
using namespace std;

string solution(int n)
{
    string result = "";
    while (n > 0)
    {
        int rem = (n - 1) % 26;
        char ch = 'A' + rem;
        result = ch + result;
        n = (n - 1) / 26;
    }

    return result;
}

int main()
{
    int num = 196;
    cout << solution(num) << endl;
}