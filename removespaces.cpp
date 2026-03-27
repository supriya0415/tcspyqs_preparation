#include <iostream>
#include <string>
using namespace std;
 string modify(string& s) {
    int write = 0;  // Write position - kahan non-space characters daalne hain
    
    // read pointer: Poori string scan karta hai
    for(int read = 0; read < s.size(); read++) {
        // Agar current char space NHI hai
        if(s[read] != ' ') {
            // Non-space char ko write position par daal do
            s[write] = s[read];  
            write++;  // Write pointer ko aage badhao (next position ready)
        }
        // Space hai to skip kar do (write pointer nahi badhega)
    }
    
    // Final size set kar do - extra spaces remove
    s.resize(write);  // write tak ke characters hi valid hain
    return s;         // Modified original string return
  }
  int main() {
    string s = "  Hello   World  ";
    cout << "Original string: '" << s << "'" << endl;
    
    string modifiedString = modify(s);  // Function call to remove spaces
    
    cout << "Modified string: '" << modifiedString << "'" << endl;  // Output modified string
    return 0;
  };