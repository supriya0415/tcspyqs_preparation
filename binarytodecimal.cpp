#include<bits/stdc++.h>
using namespace std;
    int binaryToDecimal(string &b) {
        int ans = 0;          // Decimal result build karenge
        int length = b.length();
        int n = length;       // Power start: 2^(length-1)
        
        // MSB (leftmost) se start karke right tak jao
        for(int i = 0; i < length; i++) {
            if(b[i] == '1') {         // Agar bit 1 hai
                // 2^(position) add kar do (MSB highest power)
                ans = ans + pow(2, n - 1);
            }
            n--;  // Next position ka power kam karo
        }
        return ans;
    } 
    int main() {
        string binaryString;
        cout << "Enter a binary number: ";
        cin >> binaryString;  // User se binary string input lo
        
        int decimalValue = binaryToDecimal(binaryString);  // Function call to convert to decimal
        cout << "Decimal representation of " << binaryString << " is: " << decimalValue << endl;  // Output the result
        
        return 0;
    };