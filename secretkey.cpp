#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;  // 2 strings input lo (jaise "abcde" "bcdf")
    
    set<char> se1, se2;  // unique characters store karne ke liye sets
    
    // STEP 1: s1 ke saare unique chars ko set1 mein daalo
    for(auto i : s1) {
        se1.insert(i);  // duplicates automatic remove ho jate hain
    }
    
    // STEP 2: s2 ke saare unique chars ko set2 mein daalo
    for(auto i : s2) {
        se2.insert(i);
    }
    
    // STEP 3: Intersection nikal lo (common characters)
    string ans = "";
    for(auto i : se1) {
        // se1 ka char se2 mein hai ya nahi check karo
        if(se2.find(i) != se2.end()) {
            ans += i;  // common char ko answer mein add karo
        }
    }
    
    cout << ans << endl;  // sorted common chars print karo
    return 0;
}

// se1: a→b→c→d→e (sorted)
// se2: b→c→d→f (sorted)

// Check:
// a in se2? No
// b in se2? Yes → ans="b"  
// c in se2? Yes → ans="bc"
// d in se2? Yes → ans="bcd"
// e in se2? No
// Final ans: "bcd"