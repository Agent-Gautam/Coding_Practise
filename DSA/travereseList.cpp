#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node* next;
};


int main(){
    int n;
    cout<<"enter no"<<endl;
    cin>>n;
    
    node* head = new node;
    node* cur = head;
    cout<<(node*)malloc(sizeof(node))<<endl;
    for(int i= 0; i < n; i++){
        cin>>cur->data;
        cur->next = (node*)malloc(sizeof(node));
        cur = cur->next;
    }

    cur = head;
    for(int j = 0; j < n; j++){
        cout<<cur->data;
        cur = cur->next;
    }
    
}