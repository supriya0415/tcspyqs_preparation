#include<iostream>
#include <vector>
using namespace std;
    void Addition(vector<vector<int>>& matrixA, vector<vector<int>>& matrixB) {
        int n = matrixA.size();
        int m = matrixA[0].size();
        
        for(int i = 0; i <n; i++){
            for(int j = 0; j<n; j++){
                matrixA[i][j] =  matrixA[i][j] +  matrixB[i][j];
            }
        }
    }
    int main(){
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrixA(n, vector<int>(m));
        vector<vector<int>> matrixB(n, vector<int>(m));
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> matrixA[i][j];
            }
        }
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> matrixB[i][j];
            }
        }
        
        Addition(matrixA, matrixB);
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cout << matrixA[i][j] << " ";
            }
            cout << endl;
        }
        
        return 0;
    };