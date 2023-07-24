#include <iostream>
using namespace std;
int fibo(int num){
    int f = 0, s = 1, t, temp;
    for(int i = 0; i < num-1; i++){
        t = f + s;
        temp = s;
        s = t;
        f = temp;
    }
    return t;
}
int main(){
    int n;
    cin>>n;
    cout<<fibo(n); 
}
