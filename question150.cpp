// REACH CODETOWN 1022

#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c) {
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

string canReachCODETOWN(string S) {
    string target = "CODETOWN";
    
    for (int i = 0; i < 8; ++i) {
        if (isVowel(S[i]) != isVowel(target[i])) {
            return "NO";
        }
    }
    return "YES";
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        string S;
        cin >> S;
        cout << canReachCODETOWN(S) << endl;
    }
    
    return 0;
}
