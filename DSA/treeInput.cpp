#include <iostream>
using namespace std;

void insert(int* arr, int rootind, int n){
    if(rootind == n){
        return;
    }
    int in;
    cin>>in;
    arr[rootind] = in;
    insert(arr, rootind*2, n);
    insert(arr, rootind*2+1, n);
    return;
}

int main(){
    int n;
    cout<<"no. of elements"<<endl;
    cin>>n;
    int a[n];
    insert(a, 0, n);

    cout<<"BT array is: "<<endl;
    for(int i =0; i < n ;i++){
        cout<<a[i]<<" ";
    }
    
}