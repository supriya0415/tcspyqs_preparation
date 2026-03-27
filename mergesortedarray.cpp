#include<bits/stdc++.h>
using namespace std;
    void mergeArrays(vector<int>& a, vector<int>& b) {
        // Do sorted arrays ko merge karna hai into single sorted array
        // Approach: Elements ko correct array mein move karo, phir dono sort kar do
        
        int m = a.size();   // Size of array a
        int n = b.size();   // Size of array b
        
        int left = m - 1;   // Array a ke last element se start (right end)
        int right = 0;      // Array b ke first element se start (left end)
         
        // Jab tak dono arrays mein elements hain
        while(left >= 0 && right < n) {
            // Agar a[left] > b[right] hai, to swap kar do
            if(a[left] > b[right]) {
                // Bade element ko b mein bhej do, chhote ko a mein lao
                swap(a[left], b[right]);  
                left--;   // a mein ek left move
                right++;  // b mein ek right move
            }
            else {
                break;    // Jab a[left] <= b[right], ruk jao (already correct order)
            } 
        }
        
        // Ab dono arrays ko sort kar do (final step)
        sort(a.begin(), a.end());     // Array a ko ascending sort
        sort(b.begin(), b.end());     // Array b ko ascending sort
    }
    int main(){
        int m, n;
        cin >> m >> n;  // Sizes of arrays a and b
        vector<int> a(m), b(n);
        
        // Array a ke elements input lo
        for(int i = 0; i < m; i++) {
            cin >> a[i];
        }
        
        // Array b ke elements input lo
        for(int i = 0; i < n; i++) {
            cin >> b[i];
        }
        
        mergeArrays(a, b);  // Merge function call karo
        
        // Merged arrays print karo
        for(int i : a) {
            cout << i << " ";
        }
        cout << endl;
        
        for(int i : b) {
            cout << i << " ";
        }
        cout << endl;
        
        return 0;
    };