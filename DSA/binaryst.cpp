#include <bits/stdc++.h>
using namespace std;

typedef struct node{
    int value;
    node* left;
    node* right;
}node;

node* newnode(int v){
    node *N = new node;
    N->value = v;
    N->left = NULL;
    N->right = NULL;
    return N;
}

void bst(node* &root, int arr[], int b, int e){
    int m = b + (e-b)/2;
    if(e < b){
        return;
    }
    root = newnode(arr[m]);
    bst(root->left, arr, b, m-1);
    bst(root->right, arr, m+1, e);
}

void print(node* root){
    if(root == NULL){
        return;
    }
    print(root->left);
    cout<<root->value<<" ";
    print(root->right);
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    
    node* ptr = NULL;
    bst(ptr, arr, 0, 8);
    print(ptr);
    cout<<"\n";
}