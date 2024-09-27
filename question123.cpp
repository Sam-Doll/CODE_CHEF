// chef on island 878

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;
    while (T--) {
        int x, y, xr, yr, D;
        cin >> x >> y >> xr >> yr >> D;
        
        int max_days_food = x / xr;
        int max_days_water = y / yr;
        
        int max_days_survive = min(max_days_food, max_days_water);
        
        if (max_days_survive >= D) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
