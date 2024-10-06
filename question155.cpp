// EQUALIZE AB 1069

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int A, B, X;
        cin >> A >> B >> X;
        if (abs(A - B) % (2 * X) == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

