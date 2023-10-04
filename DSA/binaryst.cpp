#include <bits/stdc++.h>
using namespace std;

typedef struct node{
    int value;
    node* left;
    node* right;
}node;

node* bst(int arr[], int b, int m, int e){
    if(m == 0){
        node *root = new node;
        root->value = arr[0];
        root->left = NULL;
        root->right = NULL;
        return root;                                            //{1,2,3,4,5}
    }
    if(m == 9){
        node *root = new node;                                  //(0,1,2)       2
        root->value = arr[9];                                   //(0,0,1)       1
        root->left = NULL;
        root->right = NULL;
        return root;                                            //(1,1,2)
    }
    node* root = new node;
    root->value = arr[m];
    root->left = bst(arr, b, m/2, m);
    root->right = bst(arr, m, m + m/2, e);
    return root;
}

int main(){
    int arr[] = {1,2,3,4,5};
    node* ptr = bst(arr, 0, 2, 4);
    cout<<ptr->value<<endl;
}