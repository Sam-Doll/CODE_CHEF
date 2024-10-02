// FIT SQUARES IN TRIANGLE 985

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int b;
        cin>>b;
        if(b<2){
            cout<<0<<endl;
            continue;
        }
        int n = (b/2)-1; 
        int total=(n*(n+1))/2;
        
        cout<<total<< endl;
    }
    return 0;
}
