#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};
node* newnode(int x){
    node* n = new node();
    n->data = x;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void print(node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}

int isbst(node* parent, node* ptr, int final){
    final = 1;
    if(ptr == NULL){
        return parent->data;
        parent == NULL;
        delete parent;
    }
    if(parent->data )
}

int main(){
    node* root = newnode(10);
    root->left = newnode(5);
    root->right = newnode(15);
    root->left->left = newnode(2);
    root->left->right = newnode(8);
    root->right->left = newnode(13);
    root->right->right = newnode(18);

    print(root);
}