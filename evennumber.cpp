#include<bits/stdc++.h> 
using namespace std; 

int main(){
    int n; // array mein kitne elements hain
    cin>>n; 
    
    vector<int>arr; // dynamic array banaya vector se
    for(int i=0;i<n;i++){
        int k; 
        cin>>k; 
        arr.push_back(k); // har element ko vector mein daal rahe hain
    } 
    
    map<int,int>mp; // map banaya jisme key=number, value=frequency store hogi
    
    // frequency count karne ka loop
    for(int i=0;i<n;i++){
        if(mp.find(arr[i])==mp.end()){ // ye check kar rahe ki number pehle se hai ya nahi
            // pehli baar aaya hai to frequency 1 set kar do
            mp[arr[i]]=1; 
        } 
        else{ 
            // pehle se tha, to frequency badha do
            mp[arr[i]]++; 
        } 
    } 
    
    // even frequency wale numbers print karne ka loop
    for(auto i:mp){
        if(i.second%2==0){ // frequency even hai ya nahi check karo
            cout<<i.first<<" "; // even frequency wala number print karo
        } 
    } 
    return 0; 
}
