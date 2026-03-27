#include <iostream>
#include <vector>
using namespace std;
int countDigits(int n) {
        // Number mein kitne digits hain count karna hai
        int count = 0;  // Digit counter
        
        // Do-while loop: Kam se kam ek baar chalega (0 ke liye bhi 1 digit)
        do {
            n = n / 10;   // Rightmost digit remove kar do (10 se divide)
            count++;      // Ek digit count kiya
        } while(n > 0);   // Jab tak number > 0 hai, digits bache hain
        
        return count;     // Total digits return kar do
      }
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;  // User se number input lo
    
    int digitCount = countDigits(n);  // Function call to count digits
    cout << "Number of digits in " << n << " is: " << digitCount << endl;  // Output the result
    
    return 0;
};