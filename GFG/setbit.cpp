#include <iostream>
using namespace std;

class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        int c = 1;
        while(n % 2!=1){
            n = n / 2;
            c++;
        }
        return c;
    }
};
int main(){
    Solution sol;
    cout<<sol.getFirstSetBit(20);
}