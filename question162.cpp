// CHEF AND TWO STRINGS 1036

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--) {
        string S1, S2;
        cin >> S1 >> S2;
        
        int minDiff = 0, maxDiff = 0;
        
        for (int i = 0; i < S1.size(); i++) {
            char ch1 = S1[i];
            char ch2 = S2[i];
            
            if (ch1 == '?' && ch2 == '?') {
                maxDiff++;
            }
            else if (ch1 == '?' || ch2 == '?') {
                maxDiff++;
            }
            else if (ch1 != ch2) {
                minDiff++;
                maxDiff++;
            }
        }
        cout << minDiff << " " << maxDiff << endl;
    }
    return 0;
}
