// GRADE THE STEEL 838

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,h,ts;
    float c;
    cin>>t;
    while (t--) {
        cin >> h >> c >> ts;
        if (h > 50 && c < 0.7 && ts > 5600) {
            cout << "10" << endl;
        } else if (h > 50 && c < 0.7) {
            cout << "9" << endl;
        } else if (c < 0.7 && ts > 5600) {
            cout << "8" << endl;
        } else if (h > 50 && ts > 5600) {
            cout << "7" << endl;
        } else if (h > 50 || c < 0.7 || ts > 5600) {
            cout << "6" << endl;
        } else {
            cout << "5" << endl;
        }
    }
    return 0;
}
