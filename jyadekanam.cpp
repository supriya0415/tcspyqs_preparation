#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    getline(cin, S);  // pura line input lo (spaces bhi)
    
    int count_of_hash = 0;   // # ki count
    int count_of_star = 0;   // * ki count
    
    // Har character check karo
    for (char i : S) {
        if (i == '#') {
            count_of_hash++;     // # mila to count badhao
        } 
        else if (i == '*') {
            count_of_star++;     // * mila to count badhao
        }
        // Baaki characters ignore karo
    }
    
    // Compare karo aur result print karo
    if (count_of_star > count_of_hash) {
        cout << "star" << endl;   // * zyada hain
    } else {
        cout << "hash" << endl;   // # zyada ya equal hain
    }
    
    return 0;
}

// Input:  "###**"
// # count: 3
// * count: 2
// Output: hash ✅

// Input:  "**###*"
// # count: 3  
// * count: 3
// Output: hash ✅ (equal case)

// Input:  "*****"
// # count: 0
// * count: 5
// Output: star ✅
