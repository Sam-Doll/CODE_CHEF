// CHEF AND CONTEST 

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
     int T;
    cin >> T;
    while (T--) {
        int X, Y, P, Q;
        cin >> X >> Y >> P >> Q;
        int c = X + P * 10;
        int cl = Y + Q * 10;

        if (c< cl) {
            cout << "Chef" << endl;
        } else if (c > cl) {
            cout << "Chefina" << endl;
        } else {
            cout << "Draw" << endl;
        }
    }
    return 0;
}
