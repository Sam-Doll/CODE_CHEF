#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        char first, second, third;
        cin >> first >> second >> third;

        char x, y;
        cin >> x >> y;

        unordered_map<char, int> preference;
        preference[first] = 0;
        preference[second] = 1;
        preference[third] = 2;

        if (preference[x] < preference[y]) {
            cout << x << endl;
        } else {
            cout << y << endl;
        }
    }

    return 0;
}
