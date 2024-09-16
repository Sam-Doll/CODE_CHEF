// CHEF AND HIS FRUIT STAND 822

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;  
    while(T--){
        int X,Y;
        cin >> X >> Y; 
        int c=min(X / 2, Y);
        cout<<c<<endl;
    }
    return 0;
}
