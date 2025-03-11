#include <bits/stdc++.h>
using namespace std;

//write a function to print vector using for loop 
void PrintVector(vector<int>& v) {
    for (auto i : v){
        cout <<i<<" " ;
        }
        }


int main(){
    int n = 8, x = 9;
    int arr[] = {8, 8, 9, 12, 14, 15, 17, 18 };
    vector<int> index(2,-1);

    //simple traversal

    int c = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            if(c == -1){
                index[0] = i;
            
            }
            c = i;
            
        }
        
        
    }
    index[1] = c;

    cout<<"size of vector: "<<index.size()<<endl;
    PrintVector(index);

    //binary search

    // int m = n/2;
    // int f = 0;
    // int l = n-1;

    // while(x != arr[m]){
    //     if(x > arr[m]){
    //         f = m;
    //         m = (m-l)/2;
    //     }
    //     else{
    //         l = m;
    //         m = (m-f)/2;
    //     }
    // }
    // cout<<"x is at "<<m<<endl;
}