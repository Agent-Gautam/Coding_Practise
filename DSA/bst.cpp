#include <bits/stdc++.h>
using namespace std;

typedef struct node{
    int value;
    node* right;
    node* left;
}node;

node* bst(int arr[], int b, int m, int e){
    if(m == 0){
        node* root = new node;
        root->value = arr[0];
        root->right = NULL;
        root->left = NULL;
        return root;
    }
    node* root = new node;
    root->value = arr[m];
    root->left = bst(arr,0,m/2,m);
    root->right = bst(arr,m, m + m/2,e);
    return root;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    
    node* ptr = bst(arr,0,9/2,8);
    cout<<ptr->value<<endl;
}