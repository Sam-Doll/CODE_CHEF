// NEAREST COURT 819

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;  
    while(T--){
        int X,Y;
        cin >> X >> Y;
        cout << (abs(X - Y) + 1) / 2 << endl;
    }
    return 0;
}
