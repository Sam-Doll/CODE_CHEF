// WORDLE 804

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
 int t;
    cin>>t;
    while(t--) {
        string S,T;
        cin >> S >> T;
        string M = "";
        for(int i=0;i<5;++i){
            if(S[i] == T[i]){
                M += 'G';
            }else{
                M += 'B'; 
            }
        }
        cout << M << endl;
    }
    return 0;
}
