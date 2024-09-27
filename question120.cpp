// GROUP ASSIGNMENT 872

#include <bits/stdc++.h>
using namespace std;

int f(int N, int X) {
    if (X <= N) {
        return 2 * N + 1 - X;
    } else {
        return 2 * N + 1 - X;
    }
}

int main() {
	// your code goes here
    int T;
    cin >> T;
    while (T--) {
        int N, X;
        cin >> N >> X;
        cout << f(N, X) << endl;
    }
    return 0;
}
