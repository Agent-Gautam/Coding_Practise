#include<bits/stdc++.h>
using namespace std;

void print(int *arr, int l){
    for(int x = 0; x < l; x++){
        cout<<arr[x]<<" ";
    }
}

int main(){
    int n = 5;
    int arr[] = {9,5,6,22,11};

    int tsum = 0;
    int* pre = &arr[0];
    int* cur = &arr[1];
    int* next = &arr[2];
    if(*pre > *cur){
        *cur = *pre;
    }
    for(int i = 1; i < n-1; i++){
        pre = &arr[i-1];
        cur = &arr[i];
        next = &arr[i+1];
        tsum = *pre + *next;
        if(tsum > *cur){
            *next = tsum;
        }
        else{
            *next = *cur;
        }
        
    }
    cout<<arr[n-1]<<endl;
    
    

}