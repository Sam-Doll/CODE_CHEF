// EXTREME BASKETBALL 854

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; 
    cin >> t;
    while (t--) {
        int A, B;
        cin >> A >> B; 
        int r= B + 10;
        int p= r - A;
        if (p <= 0) {
            cout << 0 << endl;
        } else {
            int m= (p + 2) / 3;
            cout << m<< endl;
        }
    }
    return 0;
}
