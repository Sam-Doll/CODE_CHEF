// SECRET RECIPE 888

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x1, x2, x3, v1, v2;
        cin >> x1 >> x2 >> x3 >> v1 >> v2;
        
        float c = static_cast<float>(abs(x1-x3)) / v1;
        float k = static_cast<float>(abs(x3 - x2)) / v2;
        
        if (c < k) {
            cout << "chef" << endl;
        } else if (c > k) {
            cout << "kefa" << endl;
        } else {
            cout << "draw" << endl;
        }
    }
    return 0;
}
