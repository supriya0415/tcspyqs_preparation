 #include<bits/stdc++.h>
using namespace std;
 void bubbleSort(vector<int>& arr) {
    // Outer loop: n-1 passes maximum
    for(int i = 0; i < arr.size() - 1; i++) {
        bool swapped = false;  // Flag: Kya swap hua is pass mein?
        
        // Inner loop: Last i elements already sorted
        for(int j = 0; j < arr.size() - i - 1; j++) {
            // Adjacent elements out of order?
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);  // C++ STL swap() - efficient!
                swapped = true;          // Mark: Swap hua hai
            }
        }
        
        // OPTIMIZATION: Agar koi swap nahi hua → Already sorted!
        if(!swapped) break;
    }
    }
    int main(){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        bubbleSort(arr);
        for(int i : arr) {
            cout << i << " ";
        }
        cout << endl;
        return 0;
    };