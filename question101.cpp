// MAKE N ZERO 846

#include <bits/stdc++.h>
using namespace std;

	// your code goes here
    bool f(int N) {
    while (N >= 0) {
        if (N % 3 == 0) {
            return true; 
        }
        N -= 4;
    }
    return false;
}

int main() {
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        if(f(N)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
