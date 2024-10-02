// JANMANSH AT FRUIT MARKET 947

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,a,b,c;
        cin>>x>>a>>b>>c;
        int d=(a+b+c)-max(a,max(b, c))-min(a,min(b,c));
        cout<<d+(x-1)*min(a, min(b, c))<<endl;
    }
    return 0;
}
