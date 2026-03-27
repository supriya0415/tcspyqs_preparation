#include <bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int>& nums) {
// Floyd's Tortoise & Hare Algorithm - Cycle Detection!
int slow = nums[0]; // Slow pointer (1x speed)
int fast = nums[0]; // Fast pointer (2x speed)

// PHASE 1: Cycle detect karo (duplicate ki wajah se cycle banega)
do {
 slow = nums[slow];// Slow: 1 step
fast = nums[nums[fast]];// Fast: 2 steps
} 
while (slow != fast);// Jab tak cycle mein na milen

// PHASE 2: Slow ko start par lao, dono same speed se chalao
slow = nums[0];// Slow reset to beginning
while (slow != fast) {
slow = nums[slow];// Dono 1x speed
fast = nums[fast];
}

return slow; // Cycle ka entrance = DUPLICATE!
}
int main() {
    vector<int> nums = {1, 3, 4, 2, 2};
    cout << "Duplicate number: " << findDuplicate(nums) << endl;
    return 0;
};