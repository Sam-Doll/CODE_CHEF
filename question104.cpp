// MAKE A AND B EQUAL 851

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if(a > b){
            swap(a, b);
        }
        bool possible = false;
        while(a <= b){
            if(a == b){
                possible = true;
                break;
            }
            a *= 2;  
        }
        if(possible){
            cout << "yes" << endl;
        }else{
            cout << "no" << endl;
        }
    }
    return 0;
}
