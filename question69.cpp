// SMALL FACTORIAL 760

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,f=1;
        cin>>n;
        for(int i=1;i<=n;i++){
            f=f*i;
        }
        cout<<f<<endl;
    }
    return 0;
}
