#include<bits/stdc++.h>
using namespace std;
 int isStrong(int N) {
        int original = N;  // Original number save kiya comparison ke liye
        int sum = 0;       // Factorials ka sum
        
        // Har digit nikal ke uska factorial calculate karo
        while(N > 0) {
            int rem = N % 10;     // Rightmost digit nikalo
            int factorial = 1;    // Har digit ka factorial 1 se shuru
            
            // Digit ka factorial calculate karo (1*2*3*...*rem)
            for(int i = 1; i <= rem; i++) {
                factorial = factorial * i;
            }
            
            sum = sum + factorial;  // Factorial sum mein add karo
            
            N = N / 10;             // Agla digit ke liye right shift
        }
        
        // Check: Sum == original? Strong : Not strong
        if(sum == original) {
            return 1;  // Strong number hai
        }
        return 0;      // Strong number nahi hai
    }
int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;  // User se number input lo
    
    if(isStrong(N)) {
        cout << N << " is a strong number." << endl;
    } else {
        cout << N << " is not a strong number." << endl;
    }
    
    return 0;
};