// COUNTING PRETTY NUMBERS 873

#include <bits/stdc++.h>
using namespace std;

bool is(int num) {
    int lastDigit = num % 10;
    return (lastDigit == 2 || lastDigit == 3 || lastDigit == 9);
}

int c(int L, int R) {
    int count = 0;
    for (int i = L; i <= R; ++i) {
        if (is(i)) {
            ++count;
        }
    }
    return count;
}

int main() {
	// your code goes here
    int T;
    cin >> T;
    while (T--) {
        int L, R;
        cin >> L >> R;
        cout << c(L, R) << endl;
    }
    return 0;
}
