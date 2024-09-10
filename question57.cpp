// POLICE AND THIEF 639

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(y-x>=0){
        cout<<y-x<<endl;
        }else{
            cout<<x-y<<endl;
        }
    }
    return 0;
}
