// JOIN STATES 1043

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int count = 0, sum = 0;
        for (int i = 0; i < N; i++) {
            sum += A[i];
            if (sum >= M) {
                count++;
                sum = 0;
            }
        }

        cout << count << endl;
    }

    return 0;
}
