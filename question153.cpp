// CHEF AND GAME WITH SEQUENCE 1051

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        int A[N];
        int evenCount = 0, oddCount = 0;

        for (int i = 0; i < N; i++) {
            cin >> A[i];
            if (A[i] % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }

        int minSize = 0;
        if (oddCount % 2 == 0) {
            minSize = evenCount + oddCount / 2;
        } else {
            minSize = evenCount + oddCount / 2 + 1;
        }

        cout << minSize << endl;
    }

    return 0;
}
