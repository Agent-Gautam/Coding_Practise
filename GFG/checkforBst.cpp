#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* left, *right;
    Node(int x) {
        data = x;
        right = left = NULL;
    }
};
int max = INT8_MAX;
int min = INT8_MIN;
bool checkforBst(Node *root,int max, int min) {
    if(root == NULL){
        return true;
    }
    checkforBst(root->left,root->data,min);
    checkforBst(root->right,max,root->data);
}

int main() {
    return 0;
}