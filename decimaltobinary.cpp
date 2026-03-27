#include<bits/stdc++.h>
using namespace std;
    string decToBinary(int n) {
        string res = "";  // Binary string build karenge (left to right)
        
        // Jab tak n >= 1 hai, binary digits extract karo
        while (n >= 1) {
            // Rightmost bit nikalo (LSB first)
            int bit = n % 2;      // 0 ya 1
            res = to_string(bit) + res;  // LEFT mein prepend karo (MSB first banane ke liye)
            n = n / 2;            // Right shift (next bit expose)
        }
        
        // Edge case handle: n=0 ke liye
        if(res.empty()) return "0";
        return res;
    }
    int main() {
        int n;
        cout << "Enter a decimal number: ";
        cin >> n;  // User se decimal number input lo
        
        string binaryString = decToBinary(n);  // Function call to convert to binary
        cout << "Binary representation of " << n << " is: " << binaryString << endl;  // Output the result
        
        return 0;
    };