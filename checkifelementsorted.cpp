#include<bits/stdc++.h>
using namespace std;
    bool isSorted(vector<int>& arr) {
        // Ye function check karta hai ki array non-decreasing order mein sorted hai ya nahi
        // Non-decreasing matlab: har element next element se chhota ya barabar ho sakta hai
        
        int count = 0;  // Valid pairs count kar raha hai (jahan arr[i] <= arr[i+1])
        
        // Loop chalaya adjacent elements compare karne ke liye
        for(int i = 0; i < arr.size() - 1; i++) {
            // Agar current <= next YA equal hai, to valid pair hai
            if(arr[i] < arr[i+1] || arr[i] == arr[i+1]) {
                count++;  // Valid pair mila, count badhao
            }
            // Note: Agar arr[i] > arr[i+1] hua to count nahi badhega (invalid pair)
        }
        
        // Agar saare adjacent pairs valid hain to array sorted hai
        if(count == arr.size() - 1) {
            return true;  // Perfect! Array sorted hai
        }
        return false;  // Ek bhi invalid pair mila, array unsorted hai
      }
      int main(){
        int n;
        cin >> n;  // Array ka size input lo
        vector<int> arr(n);  // Array banaya
        for(int i = 0; i < n; i++) {
            cin >> arr[i];  // Array ke elements input lo
        }
        
        // Check if array is sorted and print result
        if(isSorted(arr)) {
            cout << "Yes" << endl;  // Array sorted hai
        } else {
            cout << "No" << endl;   // Array unsorted hai
        }
        
        return 0;
      };