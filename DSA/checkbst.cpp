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

int main(){
    node* root = newnode(10);
    root->left = newnode(5);
    root->right = newnode(15);
    root->left->left = newnode(2);
    root->left->right = newnode(8);
    root->right->left = newnode(13);
    root->right->right = newnode(18);
}