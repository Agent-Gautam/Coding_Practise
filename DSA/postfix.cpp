#include <bits/stdc++.h>
using namespace std;

const char operators[] = {'+','-','*','/'};

bool isoperator(char str){
    
    for(int o = 0; o < 4; o++){
        if(str == operators[o]){
            return true;
        }
    }
    return false;
}

int operation(char op, int a, int b){
    switch (op) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a*b;
        case '/':
            return a/b;
        default: 
            return 1;
    }  
}

int main(){
    string post;
    cout<<"enter postfix notation"<<endl;
    cin>>post;

    stack<int> st;
    post+=')';
    int i = 0;
    int a,b,c;
    while(post[i] != ')'){
        if(isdigit(post[i])){
            st.push(post[i] - '0');
        }
        else if(isoperator(post[i])){
            b = st.top();
            st.pop();
            a = st.top();
            st.pop();
            c = operation(post[i], a, b);
            st.push(c);
        }
        i++;
    }
    int value = st.top();
    cout<<value<<endl;
}
//