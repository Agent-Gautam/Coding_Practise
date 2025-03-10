#include <bits/stdc++.h>
using namespace std;

class heap {
    public:
        heap* left;
        heap* right;
        int value;

    heap(int value){]
    }
};

void fillTree (heap* root, vector<int> arr, int size) {
    if(size == 0) return;
    root->value = arr[--size];
    
    return;
}

int main() {
    vector<int> arr = {45,22,67,99,12,34,89,77,11,6};
    heap* newheap = new heap;
    int n = 10;
    heap* ptr = newheap;
    // Creating the root of the heap
    heap* newheap = new heap(10); // root value is 10

    // Filling the left and right branches of the heap
    newheap->left = new heap(15);   // left child of root
    newheap->right = new heap(20);  // right child of root

    // Adding children to the left node
    newheap->left->left = new heap(30);   // left child of node 15
    newheap->left->right = new heap(40);  // right child of node 15

    // Adding children to the right node
    newheap->right->left = new heap(50);  // left child of node 20
    newheap->right->right = new heap(60); // right child of node 20

    // Adding children to the left node of node 15
    newheap->left->left->left = new heap(70);   // left child of node 30
    newheap->left->left->right = new heap(80);  // right child of node 30

    // Adding children to the right node of node 15
    newheap->left->right->left = new heap(90);  // left child of node 40
    newheap->left->right->right = new heap(100); // right child of node 40

    // Adding children to the left node of node 20
    newheap->right->left->left = new heap(110);  // left child of node 50
    newheap->right->left->right = new heap(120); // right child of node 50

    // Adding children to the right node of node 20
    newheap->right->right->left = new heap(130);  // left child of node 60
    newheap->right->right->right = new heap(140); // right child of node 60
    queue<int> q;
    
    return 0;
}