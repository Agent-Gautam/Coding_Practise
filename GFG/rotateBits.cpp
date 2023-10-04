#include <bits/stdc++.h>
using namespace std;

void print(vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}

class Solution{
    public:
        void toBin(vector <int> &arr, int n){
            if(n == 1){
                arr.push_back(1);
                return;
            }
            toBin(arr, n/2);
            arr.push_back(n%2);
        }
};
int main(){
    Solution sol;
    vector<int> arr;
    int num = 20>>5;
    sol.toBin(arr, num);
    cout<<num<<endl;
    print(arr);
    return 0;
}