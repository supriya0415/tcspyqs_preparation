#include <iostream>
#include <string>
#include <cctype>  // isalpha, isdigit, isspace ke liye
using namespace std;

int main() {
    string S;
    getline(cin, S); // pura line input with spaces
    
    int vowel = 0, consonant = 0, digit = 0, special = 0;
    
    // Har character ko PERFECTLY classify karo
    for (char c : S) {
        // Case 1: Space hai to skip karo
        if (isspace(static_cast<unsigned char>(c))) {
            continue; // spaces count nahi karenge
        }
        
        // Case 2: Vowel check (both lowercase + uppercase)
        if (string("aeiouAEIOU").find(c) != string::npos) {
            vowel++;
        }
        // Case 3: Digit check
        else if (isdigit(static_cast<unsigned char>(c))) {
            digit++;
        }
        // Case 4: Alphabet hai to consonant
        else if (isalpha(static_cast<unsigned char>(c))) {
            consonant++;
        }
        // Case 5: Baaki sab special characters
        else {
            special++;
        }
    }
    
    // Final output
    cout << vowel << " " << consonant << " " << digit << " " << special << endl;
    return 0;
}
