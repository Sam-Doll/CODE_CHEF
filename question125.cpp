// GOLD MINING 881

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;

    while (T--) {
        int N, X, Y;
        cin >> N >> X >> Y;

        if ((N + 1) * Y >= X) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
