// GET LOWEST FREE 778

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        cout<<(a+b+c)-min(a,min(b,c))<<endl;;
        
    }
    return 0;
}
