#include <iostream>
using namespace std;

void binary(int n){
    if(n == 1){
        cout<<1<<" ";
        return;
    }

    binary(n / 2);
    cout<< n % 2<<" ";
}

int main(){
    int n; 
    cout<<"enter no."<<endl;
    cin>>n;
    binary(n);
}