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

bool precedence(char one, char two){
    if(one == '+' | one == '-'){
        if(two == '*' | two == '/'){
            return false;
        }
        else{
            return true;            //if higher precedence
        }
    }
    return true;
}

int main(){
    string in, post;
    stack<char> st;
    st.push('(');
    cout<<"enter expression"<<endl;
    cin>>in;
    in += ')';
    int i = 0;
    while(st.empty() == false){
        char top = st.top();
        if(isdigit(in[i])){
            post += in[i];
        }
        else if(isoperator(in[i])){
            while(isoperator(top)){
                if(precedence(in[i], top)){
                    post += top;
                    st.pop();
                    top = st.top();
                }
            }
            st.push(in[i]);        
        }
        else if(in[i] == '('){
            st.push(in[i]);
        }
        else if(in[i] == ')'){
            while(top != '('){
                post += top;
                st.pop();
                top = st.top();
            }
            st.pop();
        }
        i++;
    }
    cout<<post<<endl;
}