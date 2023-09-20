#include <iostream> 
using namespace std;

void add(int* arr, int, int);
void del(int* arr, int);
int main(){
    int arr[] = {1,3,4,2,8,9};
    int n = 6;
    cout<<"array: "<<endl;
    for(int i = 0; i < 6; i++){
        cout<<arr[i] << " ";
    }
    cout<<"size of array: "<<sizeof(arr)/sizeof(arr[0]);
    int input;
    cout<<"operations: 1.add 2.del"<<endl;
    cin>>input;
    if(input != 1 && input != 2){
        cout<<"enter valid no."<<endl;
        main();
    }
    else{
        int ind;
        if(input == 1){
            int el;
            cout<<"index:"<<endl;
            cin>>ind;
            cout<<"element"<<endl;
            cin>>el;
            add(arr,ind,el);
        }
        else{
            cout<<"index"<<endl;
            cin>>ind;
            del(arr,ind);
        }
    }
    cout<<"new array"<<endl;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}
void add(int* arr,int ind, int el){
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = n-1; i >= ind; i++){
        arr[i] = arr[i+1];
    }
    arr[ind] = el;
}
void del(int* arr, int ind){
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = ind; i < n-2; i++){
        arr[i] = arr[i+1];
    }
}