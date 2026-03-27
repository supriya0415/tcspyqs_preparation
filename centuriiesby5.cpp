#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // input number (notes/pages/whatever)
    
    // PERFECT LOGIC: Ceiling division by 100
    // 100 ka exact multiple → n/100
    // 100 ka multiple nahi → (n/100)+1
    int result;
    
    if (n % 100 == 0) {
        result = n / 100;           // exact count
    } else {
        result = (n / 100) + 1;     // next multiple
    }
    
    cout << result << endl;
    return 0;
}
