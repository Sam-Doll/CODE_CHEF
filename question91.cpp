// THE PREPARATION 823

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T; 
    cin >> T;
    while (T--) {
        int M, N, K;
        cin >> M >> N >> K;  
        int total_time = N * K;
        if (total_time < M) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
