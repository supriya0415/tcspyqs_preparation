#include<iostream>
#include <vector>
using namespace std;
    vector<vector<int>> transpose(vector<vector<int>>& mat) {
        // Agar matrix empty hai ya rows empty hain to empty matrix return kar do
        if (mat.empty() || mat[0].empty()) return {};
        
        // m = original matrix ke rows (height)
        // n = original matrix ke columns (width)  
        int m = mat.size();
        int n = mat[0].size();
        
        // Result matrix banaya: n rows, m columns (transpose ke liye dimensions swap)
        vector<vector<int>> res(n, vector<int>(m));
        
        // Double loop: Har element ko transpose position par daal diya
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                // mat[i][j] ko res[j][i] mein place kiya (row aur column swap)
                res[j][i] = mat[i][j];
            }
        }
        return res;  // Transposed matrix return
      }
      int main(){
        int m, n;
        cin >> m >> n;  // Original matrix ke dimensions input lo
        vector<vector<int>> mat(m, vector<int>(n));  // Original matrix banaya
        
        // Original matrix ke elements input lo
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                cin >> mat[i][j];
            }
        }
        
        // Transpose function call karo
        vector<vector<int>> transposed = transpose(mat);
        
        // Transposed matrix print karo
        for(int i = 0; i < transposed.size(); i++) {
            for(int j = 0; j < transposed[0].size(); j++) {
                cout << transposed[i][j] << " ";
            }
            cout << endl;
        }
        return 0;
    };