// ODD PAIRS 1044

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;

    while (T--) {
        long long N;
        cin >> N;

        long long oddCount = (N + 1) / 2;
        long long evenCount = N / 2;

        cout << 2 * oddCount * evenCount << endl;
    }

    return 0;
}
