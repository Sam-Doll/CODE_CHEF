// CHANGE IT 1061

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int A[N], freq[101] = {0};
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
            freq[A[i]]++;
        }
        int maxFreq = 0;
        for (int i = 0; i <= 100; ++i) {
            maxFreq = max(maxFreq, freq[i]);
        }
        cout << N - maxFreq << endl;
    }
    return 0;
}

