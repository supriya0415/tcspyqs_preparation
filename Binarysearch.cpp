#include<iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {
    // Initialize left pointer to the start of the array
    int left = 0;
    
    // Initialize right pointer to the last index of the array
    int right = nums.size() - 1;
    
    // Continue the loop while left pointer is less than or equal to right pointer
    while (left <= right) {
        // Calculate the middle index to avoid overflow
        int mid = left + (right - left) / 2;
        
        // Check if the middle element is equal to the target
        if (nums[mid] == target) {
            return mid; // Target found, return the middle index
        } 
        // Check if the middle element is less than target
        else if (nums[mid] < target) {
            // Move the left pointer to the right of the middle element
            left = mid + 1;
        } 
        // If the middle element is greater than target
        else {
            // Move the right pointer to the left of the middle element
            right = mid - 1;
        }
    }
    
    // Target not found in the array
    return -1;
}

int main(){
    int n, target;
    cin >> n >> target;
    
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    cout << search(nums, target) << endl;
    return 0;
}