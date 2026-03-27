#include<iostream>
#include <vector>
using namespace std;
  int getSecondLargest(vector<int> &arr) {
      int largest_1st = arr[0];     // Pehla element largest maan lo
      int largest_2nd = -1;         // Second largest initial -1
                
      for(size_t i = 1; i < arr.size(); i++) {
         // Case 1: Current > largest → Update both
       if(arr[i] > largest_1st) {
                        largest_2nd = largest_1st;  // Purana largest ab second
                        largest_1st = arr[i];       // Naya largest
                    }
                    // Case 2: Current largest se chhota but second se bada
                    else if(arr[i] != largest_1st && arr[i] > largest_2nd) {
                        largest_2nd = arr[i];
                    }
                }
                return largest_2nd;
        }
      int main(){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << getSecondLargest(arr) << endl;
        return 0;
      };