#include <iostream>
#include <vector>
using namespace std;

void rotateArr(vector<int>& arr, int d) {   
        // 3-Step Reversal Algorithm for Array Rotation (RIGHT rotation)
        int n = arr.size();
        
        // Step 0: d ko n se modulo lo (multiple rotations avoid)
        d = d % n;  // Sirf d < n rotations chahiye
        
        // Step 1: Pehle D elements (0 to d-1) ko reverse karo
        int i = 0;
        int j = d - 1;
        while(i < j) {
            swap(arr[i], arr[j]);  // Left part reverse
            i++;
            j--;
        }
        
        // Step 2: Bache hue elements (d to n-1) ko reverse karo
        i = d; 
        j = arr.size() - 1;
        while(i < j) {
            swap(arr[i], arr[j]);  // Right part reverse
            i++;
            j--;
        }
        
        // Step 3: Puri array ko reverse karo
        i = 0; 
        j = n - 1;
        while(i < j) {
            swap(arr[i], arr[j]);  // Whole array reverse
            i++;
            j--;
        }
    }
int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int d = 3; // Number of positions to rotate right
    
    cout << "Original array: ";
    for(int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    
    rotateArr(arr, d); // Rotate the array to the right by d positions
    
    cout << "Rotated array: ";
    for(int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
};