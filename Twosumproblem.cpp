#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
int n = nums.size();
 map<int, int> mp;

for(int i = 0; i<n; i++){
int remaining = target - nums[i]; 
 if(mp.find(remaining) != mp.end()){ // check krenge ki remaining element past me dekh hai ya nhi map me
 return {mp[remaining], i}; // target mil jayega
  }
mp[nums[i]] = i; //current no. ko map me store kr denge
 }
return {}; // empty vector return kr denge
 }
 int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    
    if (!result.empty()) {
        cout << "Indices of the two numbers that add up to " << target << ": ";
        cout << result[0] << " and " << result[1] << endl;
    } else {
        cout << "No two numbers found that add up to " << target << "." << endl;
    }
    
    return 0;
  };