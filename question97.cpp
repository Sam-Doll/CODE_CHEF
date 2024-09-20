// SMALLEST NUMBERS OF NOTES 839

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

        int T, N;
        cin >> T; 
        int A[] = {100, 50, 10, 5, 2, 1}; 
    while (T--) {
        cin >> N; 
        int count = 0; 
        for (int i = 0; i < 6; i++) {
            count += N / A[i]; 
            N %= A[i]; 
        }
        cout << count << endl;
    }
    return 0;
}
