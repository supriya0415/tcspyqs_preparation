#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s; // input string (jaise "programming")
    
    int p;
    cin >> p; // minimum frequency threshold (jaise 2)
    
    map<char, int> mp; // char -> frequency store karega (sorted order mein)
    
    // STEP 1: Har character ki frequency count karo
    for (char i : s) {
        mp[i]++; // har char ka count badhao
    }
    
    // STEP 2: Frequency >= p wale chars collect karo
    string tmp = "";
    for (auto i : mp) {        // map automatically sorted hai (a-z order)
        if (i.second >= p) {   // frequency condition check
            tmp += i.first;    // qualifying char add karo
        }
    }
    
    // STEP 3: Collected chars ko sort karo (already sorted actually)
    sort(tmp.begin(), tmp.end()); 
    
    // STEP 4: Sabse pehle (smallest lexicographical) char print karo
    cout << tmp[0] << endl;
    return 0;
}
