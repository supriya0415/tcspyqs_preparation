#include <iostream>
#include <string>
#include <cmath>  // abs() ke liye
using namespace std;

int main() {
    // Input number lo
    int n;
    cin >> n;
    
    // Product aur Sum initialize karo
    int pro = 1;  // product 1 se start (0 multiply nahi karna)
    int su = 0;   // sum 0 se start
    
    // Number ko string mein convert karo
    string s = to_string(n); // 234 → "234"
    
    // Har digit ko process karo
    for (char i : s) {
        int digit = i - '0';  // '2' → 50-48 = 2 (ASCII magic!)
        pro *= digit;         // product mein multiply karo
        su += digit;          // sum mein add karo
    }
    
    // |product - sum| print karo
    cout << abs(pro - su) << endl;
    return 0;
}
