// MONEY DOUBLE 784

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

#include <iostream>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;
    
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        
        for (int i = 0; i < Y; i++) {
            X = max(X + 1000, X * 2); 
        }
        
        cout << X << endl; 
        }
    
    return 0;
}
