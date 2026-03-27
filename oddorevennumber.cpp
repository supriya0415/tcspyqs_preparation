#include<bits/stdc++.h>
using namespace std;
 pair<int, int> countOddEven(vector<int> &arr) {
        // Initialize counters for odd and even numbers
        int oddCount = 0;    // count1: Ye odd elements ko count karega
        int evenCount = 0;   // count2: Ye even elements ko count karega
        
        // Loop through each element in array
        for(int i = 0; i < arr.size(); i++) {
            // Check if current element is odd (remainder 1 when divided by 2)
            if(arr[i] % 2 != 0) {
                oddCount++;     // Odd number mila, increment odd counter
            }
            // Otherwise it's even (remainder 0 when divided by 2)
            else {
                evenCount++;    // Even number mila, increment even counter
            }
        }
        
        // Return pair: first=odd count, second=even count (GFG expected format)
        return {oddCount, evenCount};
    }
int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    pair<int, int> result = countOddEven(arr);
    
    cout << "Count of odd numbers: " << result.first << endl;   // Odd count
    cout << "Count of even numbers: " << result.second << endl; // Even count
    
    return 0;
};