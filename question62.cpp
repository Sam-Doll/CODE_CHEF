// CHESSBOARD DISTANCE 690

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int dx=abs(x1-x2);
        int dy = abs(y1-y2);
        cout<<max(dx,dy)<<endl;
    }
return 0;
}
