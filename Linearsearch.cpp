 #include<iostream>
    #include <vector>
    using namespace std;
    
    int search(vector<int>& arr, int x) {
        int n = arr.size();
        
        for(int i = 0; i < n; i++) {
            if(arr[i] == x) {
                return i;
            }
        }
        
        return -1;
    }
    
    int main(){
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << search(arr, x) << endl;
        return 0;
    };