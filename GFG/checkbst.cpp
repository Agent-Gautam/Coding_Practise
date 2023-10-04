#include <bits/stdc++.h>
using namespace std;
typedef struct node{
    int value;
    node* left;
    node* right;
}node;
node* newnode(int val){
    node* N = new node();
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

bool isbst(node* root){
    if(root->left->value == NULL || root->right->value == NULL){
        return true;
    }
    if(root->value < root->left->value || root->value > root->right->value){
        return false;
    }
    return isbst(root->left);
    return isbst(root->right);
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,0,9};
    node *ptr = NULL;
    bst(ptr, arr, 0, 8);
    cout<<isbst(ptr);
}