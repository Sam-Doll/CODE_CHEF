// LAZY CHEF 801

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;  
    cin>>t;
    while(t--){
        int x,m,d;
        cin>>x>>m>>d; 
        int a=m*x;
        int b=x+d;
        cout<<min(a,b)<<endl;
    }
    return 0;
}
