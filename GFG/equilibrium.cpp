#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;
    int arr[] = {1,3,5,2,2};

    vector<int> right;
    vector<int> left;

    int i = 0, j = n-1;
    int lsum = 0, rsum = 0;
    while(i < n){
        left.push_back(lsum);
        right.push_back(rsum);
        lsum += arr[i];
        rsum += arr[j];
        i++;
        j--;
    }    

    for(int a : arr){
        cout<<a<<" ";
    }
    cout<<"\n";
    
    for(auto x : left){
        cout<<x<<" ";
    }
    cout<<"\n";

    for(int y = right.size()-1; y >= 0; y--){
        cout<<right[y]<<" ";
    }

    reverse(right.begin(),right.end());

    for(int i = 0; i < left.size(); i++){
        if(right[i] == left[i]){
            cout<<"\n"<<"at:  "<<i+1<<endl;
        }
    }

}