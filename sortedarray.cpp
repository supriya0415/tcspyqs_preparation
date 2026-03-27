#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {0, 1, 2, 3, 1, 2}; // input array (sirf 0,1,2,3 expect karta hai)
    
    // STEP 1: Frequency count karo
    int zeros = 0, ones = 0, twos = 0, threes = 0;
    for (int num : arr) {
        if (num == 0) zeros++;
        else if (num == 1) ones++;
        else if (num == 2) twos++;
        else threes++;  // 3 ya bada number
    }
    
    // STEP 2: Array ko reorder karo (0s,1s,2s,3s sequence)
    int i = 0, n = arr.size();
    
    // Pehle saare 0s fill karo
    while (zeros > 0) {
        arr[i++] = 0;
        zeros--;
    }
    
    // Phir saare 1s
    while (ones > 0) {
        arr[i++] = 1;
        ones--;
    }
    
    // Phir saare 2s
    while (twos > 0) {
        arr[i++] = 2;
        twos--;
    }
    
    // Aakhir saare 3s
    while (threes > 0) {
        arr[i++] = 3;
        threes--;
    }
    
    // STEP 3: PERFECT OUTPUT
    for (int j = 0; j < n; j++) {
        cout << arr[j];
        if (j < n - 1) cout << " ";  // last element ke baad space nahi
    }
    cout << endl;
    
    return 0;
}
