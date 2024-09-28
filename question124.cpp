// FIND THE DIRECTION 880

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;
    
    while (T--) {
        int X;
        cin >> X;
        
        string directions[] = {"North", "East", "South", "West"};
        cout << directions[X % 4] << endl;
    }
    
    return 0;
}
