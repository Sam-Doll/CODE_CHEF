// HIGHEST DIVISOR 860

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    for(int i=10; i>=1; i--){
        if (n%i == 0){
            cout<<i<<endl;
            return 0;
        }
    }
}
