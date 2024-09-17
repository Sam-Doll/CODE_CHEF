// GENES 826

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    char p1,p2;
    cin >>p1>>p2;
    if(p1 == 'R' || p2 == 'R') {
        cout << 'R' << endl;
    }else if(p1 == 'B' || p2 == 'B') {
        cout << 'B' << endl;
    }else{
        cout << 'G' << endl;
    }
    return 0;
}
