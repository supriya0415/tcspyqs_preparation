#include<bits/stdc++.h>
using namespace std;
bool areAnagrams(string s1, string s2) {
    // Step 1: Length check
    if (s1.length() != s2.length()) {
        return false; // Different lengths can't be anagrams
    }

    // Step 2: Sort both strings
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    // Step 3: Compare sorted strings
    return s1 == s2; // If they are the same, they are anagrams
}
int main(){
  string s;
  cin >> s; 
  cout << "Enter second string: ";
  string t;
  cin >> t;
  if (areAnagrams(s, t)) {
    cout << "Yes" << endl; // Anagrams hain
  } else {
    cout << "No" << endl;  // Anagrams nahi hain
  }
};