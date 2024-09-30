// CHESS PAIRING 892

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        if(n>=x){
            cout<<"0"<<endl;
        }else{
            cout<<(x-(2*n-x))<<endl;;
        }
    }
    return 0;
}
