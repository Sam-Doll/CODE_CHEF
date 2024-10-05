// SLOW START 1031

#include <iostream>
using namespace std;

int turnsRequired(int X, int H) {
    int damage = 0, turns = 0;
    
    while (damage < H) {
        if (turns < 5) {
            damage += X / 2;
        } else {
            damage += X;
        }
        turns++;
    }
    
    return turns;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int X, H;
        cin >> X >> H;
        cout << turnsRequired(X, H) << endl;
    }
    
    return 0;
}
