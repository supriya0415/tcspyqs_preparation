#include <iostream>
#include <string>
using namespace std;

int main() {
    // String input lo (number as string) no 3 se divisible ho aur uska sum bhi 3 se divisble ho
    string N;
    cin >> N;
    
    // Digits ka sum calculate karo
    int sum = 0;
    for (char c : N) {
        int digit = c - '0';  // '5' → 53-48 = 5 (ASCII conversion)
        sum += digit;         // har digit add karo
    }
    
    // Sum divisible by 3 hai to "Yes"
    if (sum % 3 == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}
