// CHEF AND VACATION TRANSPORT

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while (t--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        int planeBusTime = X + Y;
        if (planeBusTime < Z) {
            cout << "PLANEBUS" << endl;
        } else if (Z < planeBusTime) {
            cout << "TRAIN" << endl;
        } else {
            cout << "EQUAL" << endl;
        }
    }
    return 0;
}
