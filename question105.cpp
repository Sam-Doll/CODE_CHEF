//HATTRICK 853

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; 
    cin >> t;
    while (t--) {
        vector<string> balls(6);
        for (int i = 0; i < 6; i++) {
            cin >> balls[i]; 
        }
        bool hattrick = false;
        for (int i = 0; i < 4; i++) {
            if (balls[i] == "W" && balls[i+1] == "W" && balls[i+2] == "W") {
                hattrick = true;
                break; 
            }
        }
        if (hattrick) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
