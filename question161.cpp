#include <iostream>
#include <cmath>
using namespace std;

int min_op(int X, int Y) {
    if (X >= 2 * Y || Y >= 2 * X) {
        return 0;
    }
    int opX = ceil((2 * Y - X) / 2.0);
    int opY = ceil((2 * X - Y) / 2.0);
    
    return min(opX, opY);
}
int main() {
    int t;
    cin>>t;
    while(t--){
    int X, Y;
    cin >> X >> Y;
    int result = min_op(X, Y);
    cout << result << endl;
    }
    return 0;
}