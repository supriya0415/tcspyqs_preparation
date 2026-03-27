#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int N = arr.size();
    int K = 3;  // window size - 1
    
    // ✅ FIXED: Proper max_element usage
    int ans = *max_element(arr.begin(), arr.end());
    
    for (int i = 0; i + K < N; i++) {
        int window_max = *max_element(arr.begin() + i, arr.begin() + i + K + 1);
        ans = min(ans, window_max);
    }
    
    cout << ans << endl;  // 4
    return 0;
}

