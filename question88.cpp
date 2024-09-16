// BUY 2 GET 1 FREE 821

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;  
    while(T--){
        int N, X;
        cin >> N >> X;  
        int sets = N / 3;
        int r = N % 3;
        int C = sets*2*X+r*X;
        cout << C << endl;
    }
    return 0;
}
