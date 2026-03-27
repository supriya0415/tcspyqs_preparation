//two pointer ek pionter starting ko point karega dusra last ko then start aur last wale number swap ho jayenge ek dusre se then 1st ptrs aage badega 2nd piche and again swaping of that ptrs numbers or chars
#include<iostream>
using namespace std;
void reverseString(string &s){
    int start = 0;
    int end = s.length() - 1;
    while(start < end){
        swap(s[start], s[end]);
        start++;
        end--;
    }
}
int main(){
    string s;
    getline(cin, s);
    reverseString(s);
    cout << s << endl;
    return 0;
};