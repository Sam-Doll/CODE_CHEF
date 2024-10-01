// LARGEST AND SECOND LARGEST 930

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        set<int> u;
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            u.insert(num);
        }
        
        vector<int> d(u.begin(), u.end());
        sort(d.begin(), d.end());
        int maxSum = d[d.size() - 1] + d[d.size() - 2];
        cout << maxSum << endl;
    }
    return 0;
}
