// EXISTENCE 929

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;
    while (T--) {
        long long X, Y;  
        cin >> X >> Y;
        
        if (Y >= 0 && Y % 2 == 0 && X * X == 2 * Y) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
