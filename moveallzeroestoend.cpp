#include <bits/stdc++.h>
using namespace std;
 void moveZeroes(vector<int>& nums){
int j=0;// Pointer to place the next non-zero element
for(int i=0;i<nums.size();i++){
if (nums[i]!=0){
// Swap current element with the element at index j 
swap(nums[i],nums[j]);
j++;// Move j to the next index for placing non-zero
   }
}
}
int main() {
    vector<int> nums = {0, 1, 0, 3, 12};
    moveZeroes(nums);
    cout << "Array after moving zeroes: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
};