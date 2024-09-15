// FIND A AND B 802 

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; 
    cin>>t;
    while(t--){
        int X, Y, Z;
        cin >> X >> Y >> Z;
        int A = -1, B = -1;
        if ((Y * Z) % X == 0) {
            A = Y * Z;
            B = X;
        }
        if ((X * Z) % Y == 0) {
            if (A == -1 || X * Z < A) {
                A = X * Z;
                B = Y;
            }
        }
        if ((X * Y) % Z == 0) {
            if (A == -1 || X * Y < A) {
                A = X * Y;
                B = Z;
            }
        }
        if (A == -1) {
            cout << -1 << endl;
        } else {
            cout << A << " " << B << endl;
        }
    }
    return 0;
}
