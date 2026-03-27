#include <bits/stdc++.h>
using namespace std;
bool armstrongNumber(int n)
{
  // Original number backup rakho comparison ke liye
  int temp = n;

  // Number ko string banake length nikalo (kitne digits hai)
  string s = to_string(n);
  int len = s.length(); // len = digits count (153 ke liye 3)

  int lastdigit; // Har baar last digit store karega
  int sum = 0;   // Power wala sum calculate karega
  // Jab tak n>0 hai, digits extract karte jao
  while (n > 0)
  {
    // Last digit nikalo (153 % 10 = 3)
    lastdigit = n % 10;

    // Usko len power do aur sum mein add karo (3^3 = 27)
    sum = pow(lastdigit, len) + sum;

    // Next digit ke liye n ko 10 se divide karo (153/10 = 15)
    n = n / 10;
  }

  // Original vs calculated sum compare karo
  if (temp != sum){
    return false; // Armstrong nahi hai
  }
  else{
    return true; // Armstrong hai!
  }
}

int main()
{
  return 0;
}