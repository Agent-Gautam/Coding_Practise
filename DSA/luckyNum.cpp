#include <iostream>
using namespace std;
//function to print array
// void display(int arr[], int n) {
//     for (int i = 0;i<n;++i){
//         cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }



int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int x = 1; x <= n; x++){
        arr[x-1] = x;
    }
    
    int i = 2;
    while(i < n){
        n = sizeof(arr)/sizeof(arr[0]);
        for(int j = 2; j < n; j++){
            if( j % i == 0 ){
                
            }
        }
    }
    return 0;
}