//CARD REMOVAL 1039

#include <iostream>
#include <map>
using namespace std;

int minMoves(int N, int A[]) {
    map<int, int> freq;
    int maxFreq = 0;

    for (int i = 0; i < N; i++) {
        freq[A[i]]++;
        maxFreq = max(maxFreq, freq[A[i]]);
    }

    return N - maxFreq;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        cout << minMoves(N, A) << endl;
    }
    
    return 0;
}
