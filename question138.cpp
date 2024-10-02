// EXISTENCE 929

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;
    while(T--){
        long long X, Y;
        cin >> X >> Y;
        if(X*X*X*X+4*Y*Y==4*X*X*Y){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}

