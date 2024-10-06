// THE ATTACK OF QUEEN 1076

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        int v = n - 1; 
        int h = n - 1; 
        int d1 = min(x - 1, y - 1) + min(n - x, n - y);
        int d2 = min(x - 1, n - y) + min(n - x, y - 1); 
        int total = v + h + d1 + d2;
        cout << total << endl;
    }
    return 0;
}
