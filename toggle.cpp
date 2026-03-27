#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N; // decimal number input (positive only)
    
    // STEP 1: Decimal ko Binary string mein convert karo
    string binary = "";
    int temp = N; // original N save karo
    while (temp > 0) {
        binary = to_string(temp % 2) + binary; // REMAIN DER pehle prepend karo
        temp /= 2;
    }
    // Ab binary mein N ka binary representation hai (jaise 13 -> "1101")
    
    // STEP 2: Har bit ko toggle karo (1->0, 0->1)
    string toggled = "";
    for (char bit : binary) {
        if (bit == '1') {
            toggled += '0';
        } else {
            toggled += '1';
        }
    }
    
    // STEP 3: Toggled binary ko decimal mein convert karo
    int result = 0;
    for (int i = 0; i < toggled.size(); i++) {
        if (toggled[i] == '1') {
            result += (1 << (toggled.size() - 1 - i)); // bit shift use kiya pow ki jagah
        }
    }
    
    cout << result << endl;
    return 0;
}
