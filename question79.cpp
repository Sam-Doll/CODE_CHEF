// COST OF GROCERIES 799

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin>>n>>x; 
        int a[1000], cost[1000];
        for (int i = 0;i<n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i <n; ++i) {
            cin >> cost[i];
        }
        int c = 0;
        for (int i = 0; i <n; ++i) {
            if (a[i]>=x) {
                c += cost[i];
            }
        }
        cout << c << endl;  
    }
    return 0;
}
