// SUM OF DIGITS 455

#include <bits/stdc++.h>
using namespace std;

int sumfunction(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main() {
	// your code goes here
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        cout<<sumfunction(n)<<endl;
    }
    return 0;
}

