#include <bits/stdc++.h>
using namespace std;

vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        vector<int> list;
        for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    if(i == 0 || i == n-1 || j == 0 || j == m-1){
                        list.push_back(matrix[i][j]);
                    }
                }
            }
        
        return list;
    }

int main(){
    vector<vector<int>> m = {{1,2,3},{4,5,6},{7,8,9}};
    vector<int> l = boundaryTraversal(m, 3, 3);
    for(int i = 0; i < l.size(); i++){
        cout<<l[i]<<" ";

    }
}