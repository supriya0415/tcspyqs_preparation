#include<bits/stdc++.h>
using namespace std;

bool isPerfect(int n) {
        // Perfect Number: Sum of proper divisors = number itself
        // Proper divisors = 1 se n-1 tak saare divisors (n khud exclude)
        
        if(n == 1) return false;  // 1 perfect nahi hota
        
        long long sum = 1;  // 1 ko hamesha include karo
        
        // Optimized loop: O(sqrt(n)) time - i*i <= n
        for(int i = 2; i * i <= n; i++) {
            if(n % i == 0) {              // i divisor hai
                sum += i;                 // i add karo
                // Agar i != n/i (perfect square nahi), to pair bhi add karo
                if(i != n / i) {
                    sum += n / i;
                }
            }
        }
        
        // Check: sum == n ? Perfect : Not perfect
        return n == sum;
      }
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;  // User se number input lo
    
    if(isPerfect(n)) {
        cout << n << " is a perfect number." << endl;
    } else {
        cout << n << " is not a perfect number." << endl;
    }
    
    return 0;
};