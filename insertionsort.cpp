#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& arr) {
    // Yahan insertion sort implement kiya gaya hai - array ko sorted order mein arrange karta hai
    // Har element ko uske correct position par insert karta hai sorted subarray mein
    
    int n = arr.size();  // Array ka size store kar liya
    
    // Outer loop: i=1 se shuru kyunki pehla element already sorted mana jata hai
    for(int i = 1; i < n; i++) {
        
        int key = arr[i];  // Current element ko key mein store kiya (jo insert karna hai)
        int j = i - 1;     // Previous element ke index par point kar raha hai
        
        // Inner while loop: Jab tak j>=0 hai aur previous element key se bada hai
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];  // Bade element ko ek position right shift kar diya
            j = j - 1;            // Ek position left move kar diya j ko
        }
        
        // Ab key ko uski correct position par place kar diya (j+1 par)
        arr[j + 1] = key;
    }
}  
int main(){
    int n;
    cin >> n;  // Array ka size input lo
    vector<int> arr(n);  // Vector banaya array ke liye
    for(int i = 0; i < n; i++) {
        cin >> arr[i];  // Array ke elements input lo
    }
    insertionSort(arr);  // Insertion sort function call karo
    for(int i : arr) {
        cout << i << " ";  // Sorted array print karo
    }
    cout << endl;
    return 0;
}