// CHEF AND REMISSNESS 928

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;
    while(T--){
        int A, B;
        cin >> A >> B;       
        int minimum_entries = max(A, B);
        int maximum_entries = A + B;  
        cout << minimum_entries << " " << maximum_entries << endl;
    }
    return 0;
}
