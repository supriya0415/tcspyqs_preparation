#include <iostream>
#include <sstream>
#include <vector>
#include <cctype>
using namespace std;

int main() {
    string S;
    getline(cin, S);  // pura line input lo (spaces ke saath)
    
    stringstream ss(S);  // string ko stream banao
    string token;
    vector<int> fin;     // final numbers store karne ke liye
    
    // Har word ko alag karo (space se split)
    while (ss >> token) {
        bool f = true;   // ye word number hai ya nahi
        
        // Har character check karo
        for (char j : token) {
            if (!isdigit(j)) {  // digit nahi hai (letter/symbol)?
                f = false;      // invalid number
                break;
            }
        }
        
        // Agar valid number hai to vector mein daalo
        if (f) {
            fin.push_back(stoi(token));
        }
    }
    
    // Numbers print karo
    for (int num : fin) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}

// "hello 123 world 456"   → 123 456
// "a1b2c3"                → (empty)
// "123 456 789"           → 123 456 789
// "abc"                   → (empty)
