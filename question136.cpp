// WHICH FUEL IS CHEAPER 926

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;
    while (T--) {
        int X, Y, A, B, K;
        cin >> X >> Y >> A >> B >> K;
        int final_petrol = X + A * K;
        int final_diesel = Y + B * K;
        if (final_petrol < final_diesel) {
            cout << "PETROL" << endl;
        } else if (final_petrol > final_diesel) {
            cout << "DIESEL" << endl;
        } else {
            cout << "SAME PRICE" << endl;
        }
    }
    return 0;
}
