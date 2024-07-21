#include<bits/stdc++.h>
using namespace std;

    void setRaw(vector<vector<int>>& matrix, int n, int m,int i){
        for(int row = 0; row < n; row++){
            if(matrix[i][row] != 0) matrix[i][row] = -1;
        }
    }


    void setColumn(vector<vector<int>>& matrix, int n, int m,int j){
        for(int col = 0; col < n; col++){
            if(matrix[col][j] != 0) matrix[col][j] = -1;
        }
    }
    
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        for(int i = 0;i < n; i++){
            for(int j = 0; j < m; j++){
                if(matrix[i][j] == 0){
                    setRaw(matrix , m, n, i);
                    setColumn(matrix, m , n, j);
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j] == -1) matrix[i][j] = 0;
            }
        }
    }


int main(){
      vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
      setZeroes(matrix);
      for(int i = 0; i < matrix.size(); i++){
          for(int j = 0; j < matrix[0].size(); j++){
              cout<<matrix[i][j]<<" ";
          }
          cout<<endl;
      }

      return 0;
}


