#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 4;
    int K = 3;
    int arr[] = {1, 4, 2, 3}, arr2[] = {2, 5, 1, 6};
    vector<int> sums;
    
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = 0;
        for(int j = 0; j < n; j++){
            sum = arr[i]+ arr2[j];
            sums.push_back(sum);
        }
        
    }

    sort(sums.begin(), sums.end(), greater<>());
    sums.resize(K);
    for(auto var : sums){
        cout<<var<<" ";
    }
    
}