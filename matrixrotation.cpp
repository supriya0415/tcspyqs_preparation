#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin>>n; // matrix ka size (n x n square matrix)
//     // int m = n; // backup rakha m=n ka (unused actually)
    
//     // STEP 1: Original matrix input lo
//     vector<vector<int>> matrix(n, vector<int>(n)); // n x n matrix banaya
//     for(int i = 0; i < n; i++) {        // rows
//         for(int j = 0; j < n; j++) {    // columns
//             cin >> matrix[i][j];        // input store karo
//         }
//     }
    
//     // STEP 2: TRANSPOSE banao (rows <-> columns swap)
//     vector<vector<int>> tmp(n, vector<int>(n)); // temporary matrix
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < n; j++) {
//             tmp[j][i] = matrix[i][j]; // [i][j] -> [j][i] position pe dalo
//         }
//     }
    
//     // STEP 3: Har row ko REVERSE karo
//     int t = 0; // row counter
//     for(auto i : tmp) {              // har row le lo
//         auto curr = i;               // copy banao
//         reverse(curr.begin(), curr.end()); // row ko reverse kar do
//         matrix[t++] = curr;          // original matrix mein wapas daalo
//     }
    
//     // STEP 4: Final matrix print karo
//     for(auto i : matrix) {
//         for(auto j : i) {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


    // Optimized code without using extra space (in-place rotation) 90 degree 
    vector<vector<int>> matrix(n, vector<int>(n)); // n x n matrix banaya
    for(int i = 0; i < n; i++) {        // rows
        for(int j = 0; j < n; j++) {    // columns
            cin >> matrix[i][j];        // input store karo
        }
    }
    
    // In  place rotation: Transpose + Reverse each row
    // Transpose
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    // Reverse each row
    for(int i = 0; i < n; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
    return 0;
}
