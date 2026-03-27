#include<bits/stdc++.h>
using namespace std;
 // Function to perform selection sort on the given array.
     void selectionSort(vector<int> &arr) {
        for(int i = 0;i<arr.size();i++){
            int smallestIdx = i,//unsorted part ka starting index, 
            currmin = arr[i];
            for(int j = i+1;j<arr.size();j++){
                if(arr[j]<arr[smallestIdx]){
                    smallestIdx = j;
                }
            }
            swap(arr[i], arr[smallestIdx]);
        }
      }
      int main(){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        selectionSort(arr);
        for(int i : arr) {
            cout << i << " ";
        }
        cout << endl;
        return 0;
      };