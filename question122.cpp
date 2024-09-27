// DRUNK ALCOHOL 874

#include <bits/stdc++.h>
using namespace std;

int calc(int k) {
    int stepsF = (k / 2) * 3 + (k % 2 == 1 ? 3 : 0);
    int stepsB = (k / 2) * 1;
    return stepsF - stepsB;
}

int main() {
	// your code goes here
    int T;
    cin >> T;
    while (T--) {
        int k;
        cin >> k;
        cout << calc(k) << endl;
    }
    return 0;
}
