#include <iostream>
#include <vector>
using namespace std;
int elSum(vector<int> arr,int size){
    int sum = 0;
    for(int a = 0; a < size; a++){
        sum += arr[a];
    }
    return sum;
}

int main(){
    int N, S;
    cin>>N;
    cin>>S;
    
    vector<int> arr9(N, 9);
    vector<int> arr0(N,0);

    int tempSum = 0;

    if(9*N < S || (N > 1 & S == 0)){
        cout<< -1;
        return 0;
    }


    for(int i = 0; i < N; i++){
        tempSum += arr9[i];
        if(tempSum <= S){
            arr0[i] = arr9[i];
        }
        else{
            while(tempSum > S){
                arr9[i]--;
                tempSum--;
            }
            arr0[i] = arr9[i];
        }
    }

    for(int x = 0; x < N; x++){
        cout<<arr0[x]<<" ";
    }
    return 0;
}