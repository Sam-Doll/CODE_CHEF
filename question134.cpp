// TWO RANGES 918

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin>>T;  
    while(T--){
        int A, B, C, D;
        cin>>A>>B>>C>>D;
        int count1=B-A+1; 
        int count2= D-C+1; 
        int o_s = max(A, C);
        int o_e = min(B, D);
        int overlap = 0;
        if(o_s<=o_e){
            overlap = o_e - o_s + 1; 
        }
        int result = count1 + count2 - overlap;
        cout << result << endl;
    }
    return 0;
}
