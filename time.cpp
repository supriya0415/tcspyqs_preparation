#include <iostream>
#include <cmath>  // abs() ke liye
using namespace std;

// Current time ko total minutes mein convert karta hai (00:00 se)
int numberOfMinutesinTime(int h, int m) {
    return h * 60 + m; // hours*60 + minutes = total minutes
}

int main() {
    int h, m, h1, m1, x;  // h:m = current, h1:m1 = target, x = add hours
    
    // Input: current_time target_time add_hours
    cin >> h >> m >> h1 >> m1 >> x;
    
    // STEP 1: Current time ko minutes mein convert
    int current = numberOfMinutesinTime(h, m);  // jaise 14:30 = 14*60+30 = 870
    
    // STEP 2: Target time ko minutes mein convert  
    int target = numberOfMinutesinTime(h1, m1); // jaise 15:45 = 15*60+45 = 945
    
    // STEP 3: x hours add karo current time mein
    current += (x * 60); // x hours = x*60 minutes
    
    // STEP 4: Difference nikal ke absolute value print karo
    cout << abs(target - current) << endl; // |945-990| = 45 minutes
    
    return 0;
}
