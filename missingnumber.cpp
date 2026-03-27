#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>  // For accumulate function
using namespace std;

int missingNumber(vector<int>& nums) { 
        // Array mein 0 se n-1 tak numbers hain, ek missing hai dhundna hai
        
        int n = nums.size();  // n elements hain, lekin range 0 to n hai (n+1 numbers expected)
        
        // Natural numbers ka sum formula: 1+2+...+n = n*(n+1)/2
        // Yahan 0 se n tak expected sum chahiye
        int naturalSum = n * (n + 1) / 2;  // Expected sum (0+1+2+...+n)
        
        // Actual array ka sum calculate kiya
        int numsSum = accumulate(nums.begin(), nums.end(), 0);  // Sum of given numbers
        
        // Missing number = Expected sum - Actual sum
        return naturalSum - numsSum;
    }

int main() {
    vector<int> nums = {3, 0, 1};
    cout << "Missing number: " << missingNumber(nums) << endl;
    return 0;
}
