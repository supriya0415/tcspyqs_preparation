#include<iostream>
using namespace std;
    bool checkYear(int n) {
        // Exact Gregorian rule: (div by 4 AND not div by 100) OR div by 400
        if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0) {
            return true;
        }
        return false;  
    }
    int main(){
      int n;
      cin >> n;
      cout << (checkYear(n) ? "Yes" : "No") << endl;
    };