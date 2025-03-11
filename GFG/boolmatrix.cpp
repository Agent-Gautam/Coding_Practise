#include <bits/stdc++.h>
using namespace std;

int main(){
    //user input
    int r, c;
    vector<pair<int,int>> p ;
    cout<<"enter rows col"<<endl;
    cin>>r;
    cin>>c;
    int matrix[r][c];
    
    cout<<"enter matrix:"<<endl;
    
    for(int  i = 0;  i  < r;  i++){
        for(int  j = 0; j < c; j++){
            cin>>matrix[i][j];
        }
    }
    //print
    cout<<"original matrix"<<endl;
    for(int  i = 0;  i  < r;  i++){
        for(int  j = 0; j < c; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if (matrix[i][j] == 1){
                p.push_back({i,j});
            }
            
        }
    }
    for(auto pair : p){
        int row = pair.first;
        int col = pair.second;
        for(int i = 0; i < r; i++){
            matrix[i][col] = 1;
        }
        for(int j = 0; j < c; j++){
            matrix[row][j] = 1;
        }
    }
    cout<<"modified matrix"<<endl;
    for(int  x = 0;  x  < r;  x++){
        for(int  y = 0; y < c; y++){
            cout<<matrix[x][y]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}