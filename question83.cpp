// HARDEST PROBLEM BET 803

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; 
    cin>>t;
    while(t--){
        int S_A, S_B, S_C;
        cin>>S_A>>S_B>>S_C;
        if(S_C < S_A && S_C < S_B){
            cout<<"Alice"<<endl;  
        }else if(S_B < S_A && S_B < S_C){
            cout<<"Bob"<<endl;  
        }else{
            cout<<"Draw"<<endl; 
        }
    }
    return 0;
}
