// CARS AND BIKES 809

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;
    while (T--){
        int N;
        cin >> N;
        if(N >= 2 && N % 4 == 2) {
            cout << "YES" << endl;
        }else if(N % 4 == 0 && N >= 4) {
            cout << "NO" << endl;
        }else if(N % 4 == 2) {
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
