#include<bits/stdc++.h>
using namespace std;
 
 bool isAlphaNum(char ch){ 
if((ch>='0' && ch<='9') || (tolower(ch)>='a' && tolower(ch)<='z')){
 return true;
 }
 return false;
 }
 bool isPalindrome(string s){
 int st=0, end = s.length()-1;
 while(st < end){//jb tk start less than end hai
 if(!isAlphaNum(s[st])){//check krenge ki alpha numeric hai ya nhi 
 st++; continue;//aage badh jayenge
 }
 if(!isAlphaNum(s[end])){//end me bhi alpha numeric check krenge false aata hai to aage badh jayenge
 end--; continue;
 }
if(tolower(s[st]) != tolower(s[end])){// nhi to check krrnge lower start and end ka agr mismatch kre 
 return false;// to false return kr denge
 }
 st++; end--;
 }
 return true;
}
int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s); // Input string with spaces
    if (isPalindrome(s)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
  };
  