#include <iostream>
#include <string>
#include <cmath>  // abs() ke liye
using namespace std;

// Factorial function - iterative (safe for digits 0-9)
int fact(int n) {
    if (n == 0 || n == 1) {
        return 1;  // 0! = 1!, 1! = 1
    }
    int ans = 1;
    for (int i = 1; i <= n; i++) {
        ans *= i;  // 1*2*3*...*n
    }
    return ans;
}

int main() {
    int N;
    cin >> N;  // input number lo
    
    // Number ko string mein convert karo digits extract karne ke liye
    int su = 0;
    for (char c : to_string(N)) {
        int digit = c - '0';      // '5' → 53-48 = 5
        su += fact(digit);        // us digit ka factorial add karo
    }
    
    // Check if sum of factorials == original number
    if (su == N) {
        cout << "Yes" << endl;    // Factorion number hai!
    } else {
        cout << "No" << endl;     // Nahi hai
    }
    
    return 0;
}
// Input: 145

// Digits: 1, 4, 5
// 1! = 1
// 4! = 24  
// 5! = 120
// Sum: 1+24+120 = 145 ✅
// Output: "Yes"
