// CAN YOU EAT IT 960

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n%k==0){
            cout<<n/k<<endl;
        }else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}
