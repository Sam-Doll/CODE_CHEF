//S-155 rectangled

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a=0;
        for(int j=0;j<n;j++){
            for(int i=0;i<n;i++){
                if((2*(i+j))<=n){
                    a=max(a,i*j);
                }
            }
        }
        
        cout<<a<<endl;
    }
    return 0;
}
