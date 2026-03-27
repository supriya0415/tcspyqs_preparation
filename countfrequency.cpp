#include<iostream>
#include <vector>
#include <map>
using namespace std;
    vector<vector<int>> countFreq(vector<int>& arr) {
        // Har unique element ki frequency count karni hai
        map<int, int> freqMap;  // Key=element, Value=frequency
        
        // Pehla loop: Har element ki frequency badhao
        for (int element : arr) {
            freqMap[element]++;  // Agar element nahi hai to 0 se shuru, phir 1,2,3...
        }
        
        // Result vector banaya: Har unique element ke liye [element, frequency] pair
        vector<vector<int>> result;
        
        // Dusra loop: Map ke har pair ko vector mein convert karo
        for (auto const& pair : freqMap) {
            // pair.first = element, pair.second = frequency
            result.push_back({pair.first, pair.second});
        }
        return result;  // Sorted order mein return (map automatically sorts keys)
    }
    int main(){
        int n;
        cin >> n;  // Array ka size input lo
        vector<int> arr(n);  // Array banaya
        for(int i = 0; i < n; i++) {
            cin >> arr[i];  // Array ke elements input lo
        }
        
        vector<vector<int>> freq = countFreq(arr);  // Frequency count function call karo
        
        // Result print karo: Har unique element aur uski frequency
        for (const auto& pair : freq) {
            cout << pair[0] << " " << pair[1] << endl;  // Element aur frequency print karo
        }
        
        return 0;
    };