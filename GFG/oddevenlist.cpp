#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* next;

    Node(int d){
        data = d;
        next = NULL;
    }
};

void printlist(Node* ptr){
    while(ptr!= NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
}

void oddlist(Node* odd){
    Node *ptr = odd;
    stack<Node*> st;
    while(ptr != NULL && ptr->next != NULL){
        st.push(ptr->next);
        ptr->next = ptr->next->next;
        ptr = ptr->next;
    }
    while(!st.empty()){
        ptr = st.top();
        ptr = ptr->next;
        st.pop();
    }
    
}

//10->4->9->1->3->5->9->4
//10->9->1->3->5->9->4


int main(){
    struct Node* node = new Node(10);
    struct Node* ptr = node;
    int arr[] = {10,4,9,1,3,5,9,4};
    for(int  i=1;  i < 8;  i++){
        ptr->next = new Node(arr[i]);
        ptr = ptr->next;
    }
    oddlist(node);
    printlist(node);
    return 0;
}